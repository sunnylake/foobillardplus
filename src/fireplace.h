/* fireplace.c
**
**    code for camin 3d-model
**
**    foobillard++ started at 12/2010
**    Copyright (C) 2010 - 2013 Holger Schaekel (foobillardplus@go4more.de)
**
**    This program is free software; you can redistribute it and/or modify
**    it under the terms of the GNU General Public License Version 2 as
**    published by the Free Software Foundation;
**
**    This program is distributed in the hope that it will be useful,
**    but WITHOUT ANY WARRANTY; without even the implied warranty of
**    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**    GNU General Public License for more details.
**
**    You should have received a copy of the GNU General Public License
**    along with this program; if not, write to the Free Software
**    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
**
* Exported from Blender */
#define VERTEX3_COUNT 236
#define FACES3_COUNT 152
#ifndef VERTEX_STRUCT
#define VERTEX_STRUCT
struct vertex_struct{
	float x, y, z;
	float nx,ny,nz;
	float u,v;
};
#endif
struct vertex_struct vertexs3[]=
{
{0.825057, 0.033897, 1.371429, 1.000000, 0.000000, -0.000000, 0.516864, 0.007606},
{0.825057, -0.385798, 1.160636, 1.000000, 0.000000, -0.000000, 0.383822, 0.068353},
{0.825057, -0.252752, 1.014286, 1.000000, 0.000000, -0.000000, 0.425998, 0.110528},
{0.825057, 0.033897, 1.014286, 1.000000, 0.000000, -0.000000, 0.516864, 0.110527},
{-0.825057, -0.252752, 1.014286, -1.000000, -0.000000, 0.000000, 0.425998, 0.110528},
{-0.825057, -0.385798, 1.160636, -1.000000, -0.000000, 0.000000, 0.383822, 0.068353},
{-0.825057, 0.033897, 1.371429, -1.000000, -0.000000, 0.000000, 0.516864, 0.007606},
{-0.825057, 0.033897, 1.014286, -1.000000, -0.000000, 0.000000, 0.516864, 0.110527},
{0.550038, -0.385798, 1.160636, 0.000000, -1.000000, -0.000000, 0.039618, 0.459502},
{0.825057, -0.385798, 1.160636, 0.000000, -1.000000, -0.000000, 0.141624, 0.459502},
{0.825057, -0.385798, 1.371429, 0.000000, -1.000000, -0.000000, 0.141624, 0.417692},
{0.550038, -0.385798, 1.371429, 0.000000, -1.000000, -0.000000, 0.039618, 0.417693},
{-0.825057, -0.385798, 1.371429, -0.000000, -1.000000, 0.000000, 0.141624, 0.417692},
{-0.825057, -0.385798, 1.160636, -0.000000, -1.000000, 0.000000, 0.141624, 0.459502},
{-0.550038, -0.385798, 1.160636, -0.000000, -1.000000, 0.000000, 0.039618, 0.459502},
{-0.550038, -0.385798, 1.371429, -0.000000, -1.000000, 0.000000, 0.039618, 0.417693},
{0.825057, -0.252752, 1.014286, 0.000000, -0.000000, -1.000000, 0.141624, 0.500554},
{0.550038, -0.252752, 1.014286, 0.000000, -0.000000, -1.000000, 0.039618, 0.500554},
{0.550038, 0.033897, 1.014286, 0.000000, -0.000000, -1.000000, 0.039618, 0.563095},
{0.825057, 0.033897, 1.014286, 0.000000, -0.000000, -1.000000, 0.141624, 0.563095},
{-0.550038, 0.033897, 1.014286, 0.000000, 0.000000, -1.000000, 0.039618, 0.563095},
{-0.550038, -0.252752, 1.014286, 0.000000, 0.000000, -1.000000, 0.039618, 0.500554},
{-0.825057, -0.252752, 1.014286, 0.000000, 0.000000, -1.000000, 0.141624, 0.500554},
{-0.825057, 0.033897, 1.014286, 0.000000, 0.000000, -1.000000, 0.141624, 0.563095},
{0.825057, -0.252752, 1.014286, 0.000000, -0.739940, -0.672673, 0.141624, 0.500554},
{0.825057, -0.385798, 1.160636, 0.000000, -0.739940, -0.672673, 0.141624, 0.459502},
{0.550038, -0.385798, 1.160636, 0.000000, -0.739940, -0.672673, 0.039618, 0.459502},
{0.550038, -0.252752, 1.014286, 0.000000, -0.739940, -0.672673, 0.039618, 0.500554},
{-0.550038, -0.385798, 1.160636, 0.000000, -0.739940, -0.672673, 0.039618, 0.459502},
{-0.825057, -0.385798, 1.160636, 0.000000, -0.739940, -0.672673, 0.141624, 0.459502},
{-0.825057, -0.252752, 1.014286, 0.000000, -0.739940, -0.672673, 0.141624, 0.500554},
{-0.550038, -0.252752, 1.014286, 0.000000, -0.739940, -0.672673, 0.039618, 0.500554},
{0.825057, -0.385798, 1.371429, 1.000000, -0.000000, 0.000000, 0.383822, 0.007607},
{-0.825057, -0.385798, 1.371429, -1.000000, 0.000000, 0.000000, 0.383822, 0.007607},
{0.550038, 0.033897, -0.057143, -1.000000, 0.000000, -0.000000, 0.517469, 0.419894},
{0.550038, -0.277791, 0.229224, -1.000000, 0.000000, -0.000000, 0.418664, 0.337369},
{0.550038, -0.135527, 0.300000, -1.000000, 0.000000, -0.000000, 0.463762, 0.316973},
{0.550038, 0.033897, 0.300000, -1.000000, 0.000000, -0.000000, 0.517469, 0.316973},
{-0.550038, -0.135527, 0.300000, 1.000000, 0.000000, 0.000000, 0.463762, 0.316973},
{-0.550038, -0.277791, 0.229224, 1.000000, 0.000000, 0.000000, 0.418664, 0.337369},
{-0.550038, 0.033897, -0.057143, 1.000000, 0.000000, 0.000000, 0.517469, 0.419894},
{-0.550038, 0.033897, 0.300000, 1.000000, 0.000000, 0.000000, 0.517469, 0.316973},
{0.550038, -0.135527, 0.300000, 0.000000, 0.000000, 1.000000, 0.039618, 0.741735},
{0.825057, -0.135527, 0.300000, 0.000000, 0.000000, 1.000000, 0.141624, 0.741735},
{0.825057, 0.033897, 0.300000, 0.000000, 0.000000, 1.000000, 0.141625, 0.704770},
{0.550038, 0.033897, 0.300000, 0.000000, 0.000000, 1.000000, 0.039618, 0.704770},
{-0.825057, 0.033897, 0.300000, 0.000000, 0.000000, 1.000000, 0.141625, 0.704770},
{-0.825057, -0.135527, 0.300000, 0.000000, 0.000000, 1.000000, 0.141624, 0.741735},
{-0.550038, -0.135527, 0.300000, 0.000000, 0.000000, 1.000000, 0.039618, 0.741735},
{-0.550038, 0.033897, 0.300000, 0.000000, 0.000000, 1.000000, 0.039618, 0.704770},
{0.825057, -0.277791, 0.229224, 0.000000, -1.000000, 0.000000, 0.141624, 0.775801},
{0.550038, -0.277791, 0.229224, 0.000000, -1.000000, 0.000000, 0.039618, 0.775801},
{0.550038, -0.277791, -0.057143, 0.000000, -1.000000, 0.000000, 0.039618, 0.832600},
{0.825057, -0.277791, -0.057143, 0.000000, -1.000000, 0.000000, 0.141624, 0.832601},
{-0.550038, -0.277791, -0.057143, 0.000000, -1.000000, 0.000000, 0.039618, 0.832600},
{-0.550038, -0.277791, 0.229224, 0.000000, -1.000000, 0.000000, 0.039618, 0.775801},
{-0.825057, -0.277791, 0.229224, 0.000000, -1.000000, 0.000000, 0.141624, 0.775801},
{-0.825057, -0.277791, -0.057143, 0.000000, -1.000000, 0.000000, 0.141624, 0.832601},
{0.825057, -0.277791, 0.229224, 0.000000, -0.445420, 0.895321, 0.141624, 0.775801},
{0.825057, -0.135527, 0.300000, 0.000000, -0.445420, 0.895321, 0.141624, 0.741735},
{0.550038, -0.135527, 0.300000, 0.000000, -0.445420, 0.895321, 0.039618, 0.741735},
{0.550038, -0.277791, 0.229224, 0.000000, -0.445420, 0.895321, 0.039618, 0.775801},
{-0.550038, -0.135527, 0.300000, 0.000000, -0.445420, 0.895321, 0.039618, 0.741735},
{-0.825057, -0.135527, 0.300000, 0.000000, -0.445420, 0.895321, 0.141624, 0.741735},
{-0.825057, -0.277791, 0.229224, 0.000000, -0.445420, 0.895321, 0.141624, 0.775801},
{-0.550038, -0.277791, 0.229224, 0.000000, -0.445420, 0.895321, 0.039618, 0.775801},
{0.550038, -0.277791, -0.057143, -1.000000, 0.000000, 0.000000, 0.418664, 0.419894},
{-0.550038, -0.277791, -0.057143, 1.000000, 0.000000, 0.000000, 0.418664, 0.419894},
{0.825057, 0.033897, 1.014286, 0.000000, -1.000000, 0.000000, 0.141624, 0.563095},
{0.550038, 0.033897, 1.014286, 0.000000, -1.000000, 0.000000, 0.039618, 0.563095},
{0.550038, 0.033897, 0.300000, 0.000000, -1.000000, 0.000000, 0.039618, 0.704770},
{0.825057, 0.033897, 0.300000, 0.000000, -1.000000, 0.000000, 0.141625, 0.704770},
{-0.550038, 0.033897, 0.300000, 0.000000, -1.000000, 0.000000, 0.039618, 0.704770},
{-0.550038, 0.033897, 1.014286, 0.000000, -1.000000, 0.000000, 0.039618, 0.563095},
{-0.825057, 0.033897, 1.014286, 0.000000, -1.000000, 0.000000, 0.141624, 0.563095},
{-0.825057, 0.033897, 0.300000, 0.000000, -1.000000, 0.000000, 0.141625, 0.704770},
{0.550038, 0.033897, 1.371429, -1.000000, 0.000000, 0.000000, 0.517469, 0.008209},
{0.550038, -0.385798, 1.160636, -1.000000, 0.000000, 0.000000, 0.384426, 0.068955},
{0.550038, -0.385798, 1.371429, -1.000000, 0.000000, 0.000000, 0.384426, 0.008209},
{-0.550038, -0.385798, 1.371429, 1.000000, 0.000000, -0.000000, 0.384426, 0.008209},
{-0.550038, -0.385798, 1.160636, 1.000000, 0.000000, -0.000000, 0.384426, 0.068955},
{-0.550038, 0.033897, 1.371429, 1.000000, 0.000000, -0.000000, 0.517469, 0.008209},
{0.550038, 0.033897, 1.014286, -1.000000, 0.000000, 0.000000, 0.517469, 0.111130},
{0.550038, -0.252752, 1.014286, -1.000000, 0.000000, 0.000000, 0.426602, 0.111130},
{-0.550038, -0.252752, 1.014286, 1.000000, 0.000000, 0.000000, 0.426602, 0.111130},
{-0.550038, 0.033897, 1.014286, 1.000000, 0.000000, 0.000000, 0.517469, 0.111130},
{0.825057, 0.033897, -0.057143, 1.000000, -0.000000, 0.000000, 0.516867, 0.419289},
{0.825057, -0.277791, 0.229224, 1.000000, -0.000000, 0.000000, 0.418062, 0.336765},
{0.825057, -0.277791, -0.057143, 1.000000, -0.000000, 0.000000, 0.418063, 0.419290},
{-0.825057, -0.277791, -0.057143, -1.000000, -0.000000, -0.000000, 0.418063, 0.419290},
{-0.825057, -0.277791, 0.229224, -1.000000, -0.000000, -0.000000, 0.418062, 0.336765},
{-0.825057, 0.033897, -0.057143, -1.000000, -0.000000, -0.000000, 0.516867, 0.419289},
{0.825057, 0.033897, 0.300000, 1.000000, -0.000000, 0.000000, 0.516866, 0.316368},
{0.825057, -0.135527, 0.300000, 1.000000, -0.000000, 0.000000, 0.463159, 0.316369},
{-0.825057, -0.135527, 0.300000, -1.000000, 0.000000, 0.000000, 0.463159, 0.316369},
{-0.825057, 0.033897, 0.300000, -1.000000, 0.000000, 0.000000, 0.516866, 0.316368},
{0.550038, 0.906448, -0.057143, -0.002402, -0.999997, 0.000925, 0.320764, 0.583641},
{0.550038, 0.909091, 1.371429, -0.002402, -0.999997, 0.000925, 0.321374, 0.384462},
{0.000000, 0.909091, 1.371429, -0.002402, -0.999997, 0.000925, 0.177987, 0.384022},
{0.000000, 0.909091, -0.057143, -0.002402, -0.999997, 0.000925, 0.177376, 0.583201},
{0.000000, 0.909091, 1.371429, 0.002402, -0.999997, 0.000925, 0.177987, 0.384022},
{-0.550038, 0.909091, 1.371429, 0.002402, -0.999997, 0.000925, 0.321374, 0.384462},
{-0.550038, 0.906448, -0.057143, 0.002402, -0.999997, 0.000925, 0.320764, 0.583641},
{0.000000, 0.909091, -0.057143, 0.002402, -0.999997, 0.000925, 0.177376, 0.583201},
{0.550038, 0.909091, 1.371429, -1.000000, -0.000000, -0.000000, 0.794903, 0.008208},
{0.550038, 0.908417, 1.014286, -1.000000, -0.000000, -0.000000, 0.794690, 0.111130},
{-0.550038, 0.909091, 1.371429, 1.000000, -0.000000, -0.000000, 0.794903, 0.008208},
{-0.550038, 0.908417, 1.014286, 1.000000, -0.000000, -0.000000, 0.794690, 0.111130},
{0.825057, 0.906448, -0.057143, 1.000000, 0.000000, 0.000000, 0.793462, 0.419287},
{0.825057, 0.906448, 0.300000, 1.000000, 0.000000, 0.000000, 0.793461, 0.316366},
{-0.825057, 0.906448, -0.057143, -1.000000, 0.000000, -0.000000, 0.793462, 0.419287},
{-0.825057, 0.906448, 0.300000, -1.000000, 0.000000, -0.000000, 0.793461, 0.316366},
{0.550038, 0.906448, 0.300000, -1.000000, -0.000000, 0.000000, 0.794066, 0.316972},
{0.550038, 0.906448, -0.057143, -1.000000, -0.000000, 0.000000, 0.794066, 0.419894},
{-0.550038, 0.906448, 0.300000, 1.000000, 0.000000, -0.000000, 0.794066, 0.316972},
{-0.550038, 0.906448, -0.057143, 1.000000, 0.000000, -0.000000, 0.794066, 0.419894},
{0.825057, 0.908417, 1.014286, 1.000000, 0.000000, 0.000000, 0.794084, 0.110525},
{-0.825057, 0.908417, 1.014286, -1.000000, 0.000000, -0.000000, 0.794084, 0.110525},
{0.825057, 0.909091, 1.371429, 1.000000, 0.000000, 0.000000, 0.794296, 0.007604},
{-0.825057, 0.909091, 1.371429, -1.000000, 0.000000, 0.000000, 0.794296, 0.007604},
{1.000000, 1.000000, 0.000000, 0.000000, -0.000000, 1.000000, 0.181250, 0.866520},
{0.000000, 1.000000, 0.000000, 0.000000, -0.000000, 1.000000, 0.313166, 0.866520},
{0.000000, -1.000000, 0.000000, 0.000000, -0.000000, 1.000000, 0.313166, 0.602688},
{1.000000, -1.000000, 0.000000, 0.000000, -0.000000, 1.000000, 0.181250, 0.602688},
{-1.000000, 1.000000, 0.000000, -0.000000, 0.000000, 1.000000, 0.181250, 0.866520},
{-1.000000, -1.000000, 0.000000, -0.000000, 0.000000, 1.000000, 0.181250, 0.602688},
{1.000000, 1.000000, 0.000000, 1.000000, 0.000000, -0.000000, 0.578422, 0.847328},
{1.000000, -1.000000, 0.000000, 1.000000, 0.000000, -0.000000, 0.580324, 0.592839},
{1.000000, -1.000000, -0.248112, 1.000000, 0.000000, -0.000000, 0.546852, 0.592839},
{1.000000, 1.000000, -0.248112, 1.000000, 0.000000, -0.000000, 0.544950, 0.847328},
{-1.000000, -1.000000, -0.248112, -1.000000, -0.000000, 0.000000, 0.546852, 0.592839},
{-1.000000, -1.000000, 0.000000, -1.000000, -0.000000, 0.000000, 0.580324, 0.592839},
{-1.000000, 1.000000, 0.000000, -1.000000, -0.000000, 0.000000, 0.578422, 0.847328},
{-1.000000, 1.000000, -0.248112, -1.000000, -0.000000, 0.000000, 0.544950, 0.847328},
{1.000000, -1.000000, 0.000000, -0.000000, -1.000000, 0.000000, 0.580324, 0.592839},
{0.000000, -1.000000, 0.000000, -0.000000, -1.000000, 0.000000, 0.580324, 0.457932},
{0.000000, -1.000000, -0.248112, -0.000000, -1.000000, 0.000000, 0.546852, 0.457932},
{1.000000, -1.000000, -0.248112, -0.000000, -1.000000, 0.000000, 0.546852, 0.592839},
{-1.000000, -1.000000, 0.000000, 0.000000, -1.000000, 0.000000, 0.580324, 0.592839},
{-1.000000, -1.000000, -0.248112, 0.000000, -1.000000, 0.000000, 0.546852, 0.592839},
{0.863254, 0.917462, 1.629873, 1.000000, 0.000000, -0.000000, 0.153719, 0.036642},
{0.863254, -0.706146, 1.629873, 1.000000, 0.000000, -0.000000, 0.108865, 0.227254},
{0.863254, -0.706146, 1.381761, 1.000000, 0.000000, -0.000000, 0.140955, 0.227662},
{0.863254, 0.917462, 1.381761, 1.000000, 0.000000, -0.000000, 0.175231, 0.040844},
{-0.863254, -0.706146, 1.381761, -1.000000, -0.000000, 0.000000, 0.140955, 0.227662},
{-0.863254, -0.706146, 1.629873, -1.000000, -0.000000, 0.000000, 0.108865, 0.227254},
{-0.863254, 0.917462, 1.629873, -1.000000, -0.000000, 0.000000, 0.153719, 0.036642},
{-0.863254, 0.917462, 1.381761, -1.000000, -0.000000, 0.000000, 0.175231, 0.040844},
{0.863254, -0.706146, 1.629873, 0.367862, 0.000000, -0.929880, 0.108865, 0.227254},
{0.863254, 0.917462, 1.629873, 0.367862, 0.000000, -0.929880, 0.153719, 0.036642},
{0.978012, 0.917462, 1.675272, 0.367862, 0.000000, -0.929880, 0.133605, 0.032717},
{0.978012, -0.862388, 1.675271, 0.367862, 0.000000, -0.929880, 0.081067, 0.233268},
{-0.978012, 0.917462, 1.675272, -0.367862, 0.000000, -0.929880, 0.133605, 0.032717},
{-0.863254, 0.917462, 1.629873, -0.367862, 0.000000, -0.929880, 0.153719, 0.036642},
{-0.863254, -0.706146, 1.629873, -0.367862, 0.000000, -0.929880, 0.108865, 0.227254},
{-0.978012, -0.862388, 1.675271, -0.367862, 0.000000, -0.929880, 0.081067, 0.233268},
{0.978012, -0.862388, 1.675271, 1.000000, 0.000000, 0.000000, 0.081067, 0.233268},
{0.978012, 0.917462, 1.675272, 1.000000, 0.000000, 0.000000, 0.133605, 0.032717},
{0.978012, 0.917462, 1.758502, 1.000000, 0.000000, 0.000000, 0.110535, 0.026346},
{0.978012, -0.862388, 1.758502, 1.000000, 0.000000, 0.000000, 0.059744, 0.230213},
{-0.978012, 0.917462, 1.758502, -1.000000, 0.000000, 0.000000, 0.110535, 0.026346},
{-0.978012, 0.917462, 1.675272, -1.000000, 0.000000, 0.000000, 0.133605, 0.032717},
{-0.978012, -0.862388, 1.675271, -1.000000, 0.000000, 0.000000, 0.081067, 0.233268},
{-0.978012, -0.862388, 1.758502, -1.000000, 0.000000, 0.000000, 0.059744, 0.230213},
{0.978012, -0.862388, 1.758502, -0.000000, 0.000000, -1.000000, 0.059744, 0.230213},
{0.978012, 0.917462, 1.758502, -0.000000, 0.000000, -1.000000, 0.110535, 0.026346},
{1.040426, 0.917462, 1.758502, -0.000000, 0.000000, -1.000000, 0.087106, 0.021775},
{1.040426, -0.947043, 1.758502, -0.000000, 0.000000, -1.000000, 0.038476, 0.235711},
{-1.040426, 0.917462, 1.758502, 0.000000, 0.000000, -1.000000, 0.087106, 0.021775},
{-0.978012, 0.917462, 1.758502, 0.000000, 0.000000, -1.000000, 0.110535, 0.026346},
{-0.978012, -0.862388, 1.758502, 0.000000, 0.000000, -1.000000, 0.059744, 0.230213},
{-1.040426, -0.947043, 1.758502, 0.000000, 0.000000, -1.000000, 0.038476, 0.235711},
{1.040426, -0.947043, 1.758502, 1.000000, 0.000000, 0.000000, 0.038476, 0.235711},
{1.040426, 0.917462, 1.758502, 1.000000, 0.000000, 0.000000, 0.087106, 0.021775},
{1.040426, 0.917462, 1.946657, 1.000000, 0.000000, 0.000000, 0.044912, 0.013994},
{1.040426, -0.947043, 1.946657, 1.000000, 0.000000, 0.000000, 0.016959, 0.234972},
{-1.040426, 0.917462, 1.946657, -1.000000, 0.000000, 0.000000, 0.044912, 0.013994},
{-1.040426, 0.917462, 1.758502, -1.000000, 0.000000, 0.000000, 0.087106, 0.021775},
{-1.040426, -0.947043, 1.758502, -1.000000, 0.000000, 0.000000, 0.038476, 0.235711},
{-1.040426, -0.947043, 1.946657, -1.000000, 0.000000, 0.000000, 0.016959, 0.234972},
{0.863254, -0.706146, 1.381761, 0.000000, -1.000000, 0.000000, 0.140955, 0.227662},
{0.863254, -0.706146, 1.629873, 0.000000, -1.000000, 0.000000, 0.108865, 0.227254},
{0.000000, -0.706146, 1.629873, 0.000000, -1.000000, 0.000000, 0.129485, 0.381032},
{0.000000, -0.706146, 1.381761, 0.000000, -1.000000, 0.000000, 0.161318, 0.376464},
{-0.863254, -0.706146, 1.629873, 0.000000, -1.000000, 0.000000, 0.108865, 0.227254},
{-0.863254, -0.706146, 1.381761, 0.000000, -1.000000, 0.000000, 0.140955, 0.227662},
{0.863254, -0.706146, 1.629873, 0.000000, -0.279024, -0.960284, 0.108865, 0.227254},
{0.978012, -0.862388, 1.675271, 0.000000, -0.279024, -0.960284, 0.081067, 0.233268},
{0.000000, -0.862388, 1.675271, 0.000000, -0.279024, -0.960284, 0.106345, 0.385339},
{0.000000, -0.706146, 1.629873, 0.000000, -0.279024, -0.960284, 0.129485, 0.381032},
{-0.978012, -0.862388, 1.675271, 0.000000, -0.279024, -0.960284, 0.081067, 0.233268},
{-0.863254, -0.706146, 1.629873, 0.000000, -0.279024, -0.960284, 0.108865, 0.227254},
{0.978012, -0.862388, 1.675271, 0.000000, -1.000000, 0.000000, 0.081067, 0.233268},
{0.978012, -0.862388, 1.758502, 0.000000, -1.000000, 0.000000, 0.059744, 0.230213},
{0.000000, -0.862388, 1.758502, 0.000000, -1.000000, 0.000000, 0.078719, 0.389533},
{0.000000, -0.862388, 1.675271, 0.000000, -1.000000, 0.000000, 0.106345, 0.385339},
{-0.978012, -0.862388, 1.758502, 0.000000, -1.000000, 0.000000, 0.059744, 0.230213},
{-0.978012, -0.862388, 1.675271, 0.000000, -1.000000, 0.000000, 0.081067, 0.233268},
{0.000000, -0.947043, 1.758502, 0.000000, 0.000000, -1.000000, 0.060494, 0.391638},
{0.000000, -0.862388, 1.758502, 0.000000, 0.000000, -1.000000, 0.078719, 0.389533},
{1.040426, -0.947043, 1.758502, 0.000000, -1.000000, 0.000000, 0.038476, 0.235711},
{1.040426, -0.947043, 1.946657, 0.000000, -1.000000, 0.000000, 0.016959, 0.234972},
{0.000000, -0.947043, 1.946657, 0.000000, -1.000000, 0.000000, 0.021200, 0.394649},
{0.000000, -0.947043, 1.758502, 0.000000, -1.000000, 0.000000, 0.060494, 0.391638},
{-1.040426, -0.947043, 1.946657, 0.000000, -1.000000, 0.000000, 0.016959, 0.234972},
{-1.040426, -0.947043, 1.758502, 0.000000, -1.000000, 0.000000, 0.038476, 0.235711},
{1.040426, -0.947043, 1.946657, -0.000000, 0.000000, 1.000000, 0.471172, 0.984814},
{1.040426, 0.917462, 1.946657, -0.000000, 0.000000, 1.000000, 0.021235, 0.984814},
{0.583951, 0.917462, 1.946657, -0.000000, 0.000000, 1.000000, 0.021235, 0.873505},
{0.583951, -0.466579, 1.946657, -0.000000, 0.000000, 1.000000, 0.355228, 0.873505},
{-0.583951, 0.917462, 1.946657, 0.000000, -0.000000, 1.000000, 0.021235, 0.873505},
{-1.040426, 0.917462, 1.946657, 0.000000, -0.000000, 1.000000, 0.021235, 0.984814},
{-1.040426, -0.947043, 1.946657, 0.000000, -0.000000, 1.000000, 0.471172, 0.984814},
{-0.583951, -0.466579, 1.946657, 0.000000, -0.000000, 1.000000, 0.355228, 0.873505},
{0.000000, -0.947043, 1.946657, 0.000000, 0.000000, 1.000000, 0.471172, 0.731112},
{0.000000, -0.466579, 1.946657, 0.000000, 0.000000, 1.000000, 0.355228, 0.731112},
{0.583951, -0.466579, 1.946657, 0.980904, 0.000000, 0.194492, 0.567039, 0.988236},
{0.583951, 0.917462, 1.946657, 0.980904, 0.000000, 0.194492, 0.990350, 0.988236},
{0.233181, 0.917462, 3.715731, 0.980904, 0.000000, 0.194492, 0.990350, 0.216822},
{0.233181, 0.317328, 3.715732, 0.980904, 0.000000, 0.194492, 0.899385, 0.216822},
{-0.233181, 0.917462, 3.715731, -0.980904, 0.000000, 0.194492, 0.990350, 0.216822},
{-0.583951, 0.917462, 1.946657, -0.980904, 0.000000, 0.194492, 0.990350, 0.988236},
{-0.583951, -0.466579, 1.946657, -0.980904, 0.000000, 0.194492, 0.567039, 0.988236},
{-0.233181, 0.317328, 3.715732, -0.980904, 0.000000, 0.194492, 0.899385, 0.216822},
{0.000000, -0.466579, 1.946657, 0.000000, -0.914261, 0.405125, 0.990350, 0.988236},
{0.583951, -0.466579, 1.946657, 0.000000, -0.914261, 0.405125, 0.566466, 0.988236},
{0.233181, 0.317328, 3.715732, 0.000000, -0.914261, 0.405125, 0.899385, 0.216822},
{0.000000, 0.317328, 3.715732, 0.000000, -0.914261, 0.405125, 0.990350, 0.216822},
{-0.233181, 0.317328, 3.715732, 0.000000, -0.914261, 0.405125, 0.899385, 0.216822},
{-0.583951, -0.466579, 1.946657, 0.000000, -0.914261, 0.405125, 0.566466, 0.988236},
{0.863254, -0.706146, 1.381761, 0.000000, 0.000000, -1.000000, 0.851315, 0.010916},
{0.000000, -0.706146, 1.381761, 0.000000, 0.000000, -1.000000, 0.851315, 0.087476},
{0.000000, 0.917462, 1.381761, 0.000000, 0.000000, -1.000000, 0.995309, 0.087476},
{0.863254, 0.917462, 1.381761, 0.000000, 0.000000, -1.000000, 0.995309, 0.010916},
{-0.863254, -0.706146, 1.381761, 0.000000, 0.000000, -1.000000, 0.851315, 0.010916},
{-0.863254, 0.917462, 1.381761, 0.000000, 0.000000, -1.000000, 0.995309, 0.010916}
};

unsigned short indexes3[]={0, 1, 2,0, 2, 3,4, 5, 6,4, 6, 7,
8, 9, 10,8, 10, 11,12, 13, 14,12, 14, 15,
16, 17, 18,16, 18, 19,20, 21, 22,20, 22, 23,
24, 25, 26,24, 26, 27,28, 29, 30,28, 30, 31,
1, 0, 32,33, 6, 5,34, 35, 36,34, 36, 37,
38, 39, 40,38, 40, 41,42, 43, 44,42, 44, 45,
46, 47, 48,46, 48, 49,50, 51, 52,50, 52, 53,
54, 55, 56,54, 56, 57,58, 59, 60,58, 60, 61,
62, 63, 64,62, 64, 65,35, 34, 66,
67, 40, 39,68, 69, 70,68, 70, 71,
72, 73, 74,72, 74, 75,76, 77, 78,
79, 80, 81,76, 82, 83,76, 83, 77,
84, 85, 81,84, 81, 80,86, 87, 88,
89, 90, 91,86, 92, 93,86, 93, 87,
94, 95, 91,94, 91, 90,96, 97, 98,96, 98, 99,
100, 101, 102,100, 102, 103,82, 76, 104,82, 104, 105,
106, 81, 85,106, 85, 107,92, 86, 108,92, 108, 109,
110, 91, 95,110, 95, 111,34, 37, 112,34, 112, 113,
114, 41, 40,114, 40, 115,3, 92, 109,3, 109, 116,
111, 95, 7,111, 7, 117,82, 105, 112,82, 112, 37,
114, 107, 85,114, 85, 41,3, 116, 118,3, 118, 0,
119, 117, 7,119, 7, 6,120, 121, 122,120, 122, 123,
122, 121, 124,122, 124, 125,126, 127, 128,126, 128, 129,
130, 131, 132,130, 132, 133,134, 135, 136,134, 136, 137,
136, 135, 138,136, 138, 139,140, 141, 142,140, 142, 143,
144, 145, 146,144, 146, 147,148, 149, 150,148, 150, 151,
152, 153, 154,152, 154, 155,156, 157, 158,156, 158, 159,
160, 161, 162,160, 162, 163,164, 165, 166,164, 166, 167,
168, 169, 170,168, 170, 171,172, 173, 174,172, 174, 175,
176, 177, 178,176, 178, 179,180, 181, 182,180, 182, 183,
182, 184, 185,182, 185, 183,186, 187, 188,186, 188, 189,
188, 190, 191,188, 191, 189,192, 193, 194,192, 194, 195,
194, 196, 197,194, 197, 195,164, 167, 198,164, 198, 199,
198, 171, 170,198, 170, 199,200, 201, 202,200, 202, 203,
202, 204, 205,202, 205, 203,206, 207, 208,206, 208, 209,
210, 211, 212,210, 212, 213,214, 206, 209,214, 209, 215,
213, 212, 214,213, 214, 215,216, 217, 218,216, 218, 219,
220, 221, 222,220, 222, 223,224, 225, 226,224, 226, 227,
228, 229, 224,228, 224, 227,230, 231, 232,230, 232, 233,
232, 231, 234,232, 234, 235};
