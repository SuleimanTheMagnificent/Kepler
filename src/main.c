#include <gtk/gtk.h>
#include <stdlib.h>

static void button_callback(GtkWidget *widget, gpointer data) {
  g_print("Hello, World!\n");
}

int main(int argc, char *argv[]) {
  GtkWidget *window;
  GtkWidget *button;    
  
  gtk_init(&argc, &argv);
  
  window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
  gtk_container_set_border_width(GTK_CONTAINER(window), 10);
  
  button = gtk_button_new_with_label("Hello, World!");
  g_signal_connect (button, "clicked", G_CALLBACK (button_callback), NULL);
  gtk_container_add(GTK_CONTAINER(window), button);
  
  gtk_widget_show(button);
  gtk_widget_show(window);
  
  gtk_main();
  return 0;
}
