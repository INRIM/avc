#!/usr/bin/python
# .+
#
# .identifier :	$Id:$
# .context    : Application View Controller
# .title      : A counter with count speed control (GTK)
# .kind	      : python source
# .author     : Fabrizio Pollastri
# .site	      : Revello - Italy
# .creation   :	17-Nov-2006
# .copyright  : (c) 2006 Fabrizio Pollastri.
# .license    : GNU General Public License (see below)
#
# This file is part of "AVC, Application View Controller".
#
# AVC is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 3 of the License, or
# (at your option) any later version.
#
# AVC is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.
#
# .-


import gi.repository.GObject as GObject #--
import gi.repository.Gtk as Gtk		#- gimp tool kit bindings

from avc import *			# AVC

UI_XML = 'gtk3_counter.ui'		# GUI descriptor

ROOT_WINDOW = 'root_window'		# name of the top level widget
LOW_SPEED = 500				#--
HIGH_SPEED = 100			#- low and high speed period (ms)


class ExampleGUI:
  "Counter GUI creation"

  def __init__(self):

    # create GUI
    self.builder = Gtk.Builder()
    self.builder.add_from_file(UI_XML)
    self.builder.connect_signals(self)
    self.root_window = self.builder.get_object(ROOT_WINDOW)
    self.root_window.show_all()


  def timer(self,period,function):
    "Start a GTK timer calling back 'function' every 'period' seconds."
    self.timer1 = GObject.timeout_add(period,function)
  
  def on_destroy(self,window):
    "Terminate program at window destroy"
    Gtk.main_quit()


class ExampleMain(AVC):
  """
  A counter displayed in a Label widget whose count speed can be
  accelerated by checking a check box.
  """

  def __init__(self,gui):

    # save GUI
    self.gui = gui

    # the counter variable and its speed status
    self.counter = 0
    self.high_speed = False

    # start incrementer timer
    self.gui.timer(LOW_SPEED,self.incrementer)


  def incrementer(self):
    """
    Counter incrementer: increment period = LOW_SPEED, if high speed is False,
    increment period = HIGH_SPEED otherwise. Return False to destroy previous
    timer.
    """
    self.counter += 1
    if self.high_speed:
      period = HIGH_SPEED
    else:
      period = LOW_SPEED
    self.gui.timer(period,self.incrementer)
    return False

  def high_speed_changed(self,value):
    "Notify change of counting speed to terminal"
    if value:
      print 'counting speed changed to high'
    else:
      print 'counting speed changed to low'


#### MAIN

example_gui = ExampleGUI()		# create the application GUI
example = ExampleMain(example_gui)	# instantiate the application
example.avc_init()			# connect widgets with variables
Gtk.main()				# run GTK event loop until quit

#### END
