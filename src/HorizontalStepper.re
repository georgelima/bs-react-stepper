[@bs.module "react-stepper-horizontal"]
external reactClass : ReasonReact.reactClass = "default";

let make =
    (
      ~steps,
      ~activeStep=0,
      ~activeColor="#5096FF",
      ~completeColor="#5096FF",
      ~defaultColor="#E0E0E0",
      ~activeTitleColor="#000",
      ~completeTitleColor="#000",
      ~defaultTitleColor="#757575",
      ~circleFontColor="#FFF",
      ~size=32,
      ~circleFontSize=16,
      ~titleFontSize=16,
      ~circleTop=24,
      ~titleTop=8,
      ~defaultOpacity=1,
      ~completeOpacity=1,
      ~activeOpacity=1,
      ~defaultTitleOpacity=1,
      ~completeTitleOpacity=1,
      ~activeTitleOpacity=1,
      ~barStyle="solid",
      ~defaultBorderColor=?,
      ~completeBorderColor=?,
      ~activeBorderColor=?,
      ~defaultBorderStyle="solid",
      ~completeBorderStyle="solid",
      ~activeBorderStyle="solid",
      ~defaultBarColor="#E0E0E0",
      ~completeBarColor="#E0E0E0",
      ~activeCircleFontColor="#000",
      ~defaultCircleFontColor="#000",
      ~checkIcon=ReasonReact.nullElement,
      _children
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props={
      "activeStep": activeStep,
      "steps": steps,
      "activeColor": activeColor,
      "completeColor": completeColor,
      "defaultColor": defaultColor,
      "activeTitleColor": activeTitleColor,
      "completeTitleColor": completeTitleColor,
      "defaultTitleColor": defaultTitleColor,
      "circleFontColor": circleFontColor,
      "size": size,
      "circleFontSize": circleFontSize,
      "titleFontSize": titleFontSize,
      "circleTop": circleTop,
      "titleTop": titleTop,
      "defaultOpacity": defaultOpacity,
      "completeOpacity": completeOpacity,
      "activeOpacity": activeOpacity,
      "defaultTitleOpacity": defaultTitleOpacity,
      "completeTitleOpacity": completeTitleOpacity,
      "activeTitleOpacity": activeTitleOpacity,
      "barStyle": barStyle,
      "defaultBarColor": defaultBarColor,
      "defaultBorderColor": defaultBorderColor,
      "completeBorderColor": completeBorderColor,
      "activeBorderColor": activeBorderColor,
      "defaultBorderStyle": defaultBorderStyle,
      "completeBorderStyle": completeBorderStyle,
      "activeBorderStyle": activeBorderStyle,
      "completeBarColor": completeBarColor,
      "activeCircleFontColor": activeCircleFontColor,
      "checkIcon": checkIcon,
      "defaultCircleFontColor": defaultCircleFontColor
    },
    [||]
  );
