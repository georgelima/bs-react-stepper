[@bs.module "react-stepper-horizontal"]
external reactClass : ReasonReact.reactClass = "default";

let make = (~steps, ~activeStep, _children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props={"activeStep": activeStep, "steps": steps},
    [||]
  );