#!/usr/bin/python
# .+
#
# .identifier :	$Id:$
# .context    : Application View Controller
# .title      : A counter with count speed control (Tk)
# .kind	      : python source
# .author     : Fabrizio Pollastri
# .site	      : Revello - Italy
# .creation   :	17-Nov-2006
# .copyright  : (c) 2006 Fabrizio Pollastri
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


from Tkinter import *			# Tk interface

from avc.avctk import *			# AVC for Tk

LOW_SPEED = 500				#--
HIGH_SPEED = 100			#- low and high speed count period (ms)


class Example(AVC):
  """
  A counter displayed in a Label widget whose count speed can be doubled
  by pressing a Toggle Button.
  """

  def __init__(self):

    # create GUI
    self.root = Tk()
    self.root.title('AVC Tk counter example')
    self.frame = Frame(self.root,name='frame')
    self.frame.pack()
    self.label = Label(self.frame,name='counter')
    self.label.pack(side=LEFT)
    self.check_button = \
        Checkbutton(self.frame,name='high_speed',text="high\nspeed")
    self.check_button.pack(side=RIGHT)

    # the counter variable and its speed status
    self.counter = 0
    self.high_speed = False

    # start counter incrementer at low speed
    self.root.after(LOW_SPEED,self.incrementer) 


  def incrementer(self):
    """
    Counter incrementer: increment period = LOW_SPEED, if high speed is False,
    increment period = HIGH_SPEED otherwise.
    """
    self.counter += 1
    if self.high_speed:
      period = HIGH_SPEED
    else:
      period = LOW_SPEED
    self.root.after(period,self.incrementer) 


#### MAIN

example = Example()			# instantiate the application
example.avc_init()			# connect widgets with variables
Tkinter.mainloop()		 	# run Tk event loop until quit


#### END
