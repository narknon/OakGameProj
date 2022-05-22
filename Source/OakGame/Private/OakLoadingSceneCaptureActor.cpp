#include "OakLoadingSceneCaptureActor.h"
#include "Components/SceneCaptureComponent2D.h"

AOakLoadingSceneCaptureActor::AOakLoadingSceneCaptureActor() {
    this->CaptureComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("CaptureComponent"));
}

