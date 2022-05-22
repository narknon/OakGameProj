#include "OakUIActorContainer.h"
#include "SocketComponent.h"
#include "Components/SceneComponent.h"

AOakUIActorContainer::AOakUIActorContainer() {
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->PreviewActorSocket = CreateDefaultSubobject<USocketComponent>(TEXT("PreviewActorSocket"));
    this->PreviewCubeMap = NULL;
    this->DefaultAmbientCubeMapIntensity = 1.00f;
    this->bHideFirstPersonMesh = true;
    this->bDrawPreviewInForeground = true;
    this->bDrawForOwnerOnly = true;
    this->bTickWhilePaused = true;
    this->bForceLOD0 = true;
    this->bForceDisableURO = true;
    this->bHideWhenMenuStackHidden = false;
    this->SelfBoundsScale = 0.00f;
}

