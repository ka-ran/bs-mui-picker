[@bs.module "mui-pickers/dist/index"] [@react.component]
external make:
  (~date: option('a), ~handleDateChange: 'a => unit, ~tz: string) =>
  React.element =
  "TimePickerBinding";
