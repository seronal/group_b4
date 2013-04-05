// generated by Fast Light User Interface Designer (fluid) version 1.0301

#include "GUITEST.h"
#include<stdio.h>
#include<stdlib.h>

void MENU_CB(Fl_Widget*, void* Data) {
  printf("IT IS ALL WORKING!!!!  Data = '%s'\n", (const char*) Data);
}

void WIN_QUIT_CB(Fl_Widget*, void*) {
  printf("PROGRAM IS EXITING NOW!!!\n");
  exit(0);
}

Fl_Button *Go_Button=(Fl_Button *)0;

Fl_Button *Import_Button=(Fl_Button *)0;

Fl_Button *Export_Button=(Fl_Button *)0;

Fl_Menu_Item menu_[] = {
 {"File", 0,  0, 0, 64, FL_NORMAL_LABEL, 11, 14, 0},
 {"Save", 0,  (Fl_Callback*)MENU_CB, (void*)("File/Save"), 0, FL_NORMAL_LABEL, 11, 14, 0},
 {"Import", 0,  (Fl_Callback*)MENU_CB, (void*)("File/Import"), 0, FL_NORMAL_LABEL, 11, 14, 0},
 {"Export", 0,  (Fl_Callback*)MENU_CB, (void*)("File/Export"), 0, FL_NORMAL_LABEL, 11, 14, 0},
 {"Go", 0,  (Fl_Callback*)MENU_CB, (void*)("File/Go"), 0, FL_NORMAL_LABEL, 11, 14, 0},
 {0,0,0,0,0,0,0,0,0},
 {"About", 0,  0, 0, 64, FL_NORMAL_LABEL, 11, 14, 0},
 {"Project", 0,  (Fl_Callback*)MENU_CB, (void*)("About/Project"), 0, FL_NORMAL_LABEL, 11, 14, 0},
 {"Team", 0,  (Fl_Callback*)MENU_CB, (void*)("About/Team"), 0, FL_NORMAL_LABEL, 11, 14, 0},
 {0,0,0,0,0,0,0,0,0},
 {"Help", 0,  0, 0, 64, FL_NORMAL_LABEL, 11, 14, 0},
 {"How to Use", 0,  (Fl_Callback*)MENU_CB, (void*)("Help/HowToUse"), 0, FL_NORMAL_LABEL, 11, 14, 0},
 {0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0}
};

int main(int argc, char **argv) {
  Fl_Double_Window* w;
  { Fl_Double_Window* o = new Fl_Double_Window(910, 720, "Thirion Demons Registration GUI");
    w = o;
    o->box(FL_BORDER_BOX);
    o->labelfont(11);
    o->callback((Fl_Callback*)WIN_QUIT_CB);
    { Fl_Group* o = new Fl_Group(10, 45, 245, 210, "Fixed Image");
      o->tooltip("The Fixed Image");
      o->box(FL_ENGRAVED_BOX);
      o->labelfont(11);
      o->align(Fl_Align(577));
      { new Fl_Box(35, 73, 190, 142, "label");
      } // Fl_Box* o
      o->end();
    } // Fl_Group* o
    { Fl_Group* o = new Fl_Group(10, 275, 245, 205, "Moving Image");
      o->tooltip("The Moving Image");
      o->box(FL_ENGRAVED_BOX);
      o->labelfont(11);
      o->end();
    } // Fl_Group* o
    { Fl_Group* o = new Fl_Group(265, 45, 625, 435, "Alignment");
      o->box(FL_ENGRAVED_BOX);
      o->labelfont(11);
      o->end();
    } // Fl_Group* o
    { Fl_Group* o = new Fl_Group(10, 505, 880, 205, "Parameters");
      o->box(FL_ENGRAVED_BOX);
      o->labelfont(11);
      o->align(Fl_Align(FL_ALIGN_TOP_LEFT));
      { Go_Button = new Fl_Button(795, 520, 85, 50, "GO");
        Go_Button->tooltip("Start Registration");
        Go_Button->box(FL_ENGRAVED_BOX);
        Go_Button->down_box(FL_GTK_UP_FRAME);
        Go_Button->color((Fl_Color)44);
        Go_Button->selection_color((Fl_Color)61);
        Go_Button->labelfont(11);
        Go_Button->callback((Fl_Callback*)MENU_CB, (void*)("File/Go"));
      } // Fl_Button* Go_Button
      { Import_Button = new Fl_Button(795, 580, 85, 50, "IMPORT");
        Import_Button->tooltip("Import Two Images (TYPE?)");
        Import_Button->box(FL_ENGRAVED_BOX);
        Import_Button->down_box(FL_GTK_UP_FRAME);
        Import_Button->color((Fl_Color)44);
        Import_Button->selection_color((Fl_Color)177);
        Import_Button->labelfont(11);
        Import_Button->callback((Fl_Callback*)MENU_CB, (void*)("File/Import"));
      } // Fl_Button* Import_Button
      { Export_Button = new Fl_Button(795, 640, 85, 50, "EXPORT");
        Export_Button->tooltip("Export Registered Image");
        Export_Button->box(FL_ENGRAVED_BOX);
        Export_Button->down_box(FL_GTK_UP_FRAME);
        Export_Button->color((Fl_Color)44);
        Export_Button->selection_color((Fl_Color)177);
        Export_Button->labelfont(11);
        Export_Button->callback((Fl_Callback*)MENU_CB, (void*)("File/Export"));
      } // Fl_Button* Export_Button
      { Fl_Value_Slider* o = new Fl_Value_Slider(35, 530, 180, 21, "slider:");
        o->type(5);
        o->textsize(14);
      } // Fl_Value_Slider* o
      { Fl_Value_Slider* o = new Fl_Value_Slider(35, 574, 180, 21, "slider:");
        o->type(5);
        o->textsize(14);
      } // Fl_Value_Slider* o
      { new Fl_Counter(240, 530, 245, 21, "counter:");
      } // Fl_Counter* o
      { Fl_Value_Slider* o = new Fl_Value_Slider(35, 619, 180, 21, "slider:");
        o->type(5);
        o->textsize(14);
      } // Fl_Value_Slider* o
      { new Fl_Spinner(305, 580, 70, 25, "spinner:");
      } // Fl_Spinner* o
      { Fl_Scrollbar* o = new Fl_Scrollbar(245, 625, 185, 20, "Slide");
        o->type(1);
        o->maximum(100);
      } // Fl_Scrollbar* o
      { new Fl_Value_Input(590, 530, 50, 25, "input value:");
      } // Fl_Value_Input* o
      { new Fl_Value_Output(550, 570, 90, 25, "output value:");
      } // Fl_Value_Output* o
      o->end();
    } // Fl_Group* o
    { Fl_Menu_Bar* o = new Fl_Menu_Bar(0, 0, 910, 20);
      o->box(FL_ENGRAVED_BOX);
      o->down_box(FL_GTK_UP_BOX);
      o->selection_color((Fl_Color)177);
      o->textfont(11);
      o->menu(menu_);
    } // Fl_Menu_Bar* o
    { Fl_Progress* o = new Fl_Progress(705, -1, 205, 21, "Registration Progress");
      o->tooltip("Measures Registration Progress");
      o->selection_color((Fl_Color)4);
      o->labelfont(11);
      o->deactivate();
    } // Fl_Progress* o
    o->end();
    o->resizable(o);
  } // Fl_Double_Window* o
  w->show(argc, argv);
  return Fl::run();
}
