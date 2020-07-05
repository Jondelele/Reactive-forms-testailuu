import { BrowserModule } from '@angular/platform-browser';
import { NgModule } from '@angular/core';
import { DatePickerModule } from '@syncfusion/ej2-angular-calendars';

import { ReactiveFormsModule } from '@angular/forms';

import { AppComponent } from './app.component';

@NgModule({
  declarations: [
    AppComponent
  ],
  imports: [
    BrowserModule,
    ReactiveFormsModule,
    DatePickerModule
  ],
  providers: [],
  bootstrap: [AppComponent]
})
export class AppModule { }
