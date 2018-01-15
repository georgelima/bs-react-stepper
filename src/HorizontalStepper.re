[@bs.module "react-stepper-horizontal"]
external reactClass : ReasonReact.reactClass = "HorizontalStepper";

let make = (~steps, ~activeStep, _children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props={"activeStep": activeStep, "steps": steps},
    [||]
  );