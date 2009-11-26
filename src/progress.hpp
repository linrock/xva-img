/*
   Copyright (C) 2009 Erik Lax 

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.
*/

#ifndef _XVA_PROGRESS_HPP_
#define _XVA_PROGRESS_HPP_

namespace XVA
{
	class Progress
	{
		public:
			Progress();
			~Progress();

			void Start();
			void Update(float val);
			void Finish(bool error = false);
		private:
			bool m_active;
			int m_curval;
	};
}

#endif
