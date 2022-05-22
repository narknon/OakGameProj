#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OakUIActorContainer.generated.h"

class USocketComponent;
class USceneComponent;
class UTextureCube;

UCLASS()
class OAKGAME_API AOakUIActorContainer : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Export, VisibleAnywhere)
    USceneComponent* SceneComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    USocketComponent* PreviewActorSocket;
    
    UPROPERTY(EditAnywhere)
    UTextureCube* PreviewCubeMap;
    
    UPROPERTY(EditAnywhere)
    float DefaultAmbientCubeMapIntensity;
    
    UPROPERTY(EditAnywhere)
    bool bHideFirstPersonMesh;
    
    UPROPERTY(EditAnywhere)
    bool bDrawPreviewInForeground;
    
    UPROPERTY(EditAnywhere)
    bool bDrawForOwnerOnly;
    
    UPROPERTY(EditAnywhere)
    bool bTickWhilePaused;
    
    UPROPERTY(EditAnywhere)
    bool bForceLOD0;
    
    UPROPERTY(EditAnywhere)
    bool bForceDisableURO;
    
    UPROPERTY(EditAnywhere)
    bool bHideWhenMenuStackHidden;
    
    UPROPERTY(EditAnywhere)
    float SelfBoundsScale;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AActor> PreviewActor;
    
    UPROPERTY(Transient)
    TSoftClassPtr<AActor> PreviewLoadClass;
    
    AOakUIActorContainer();
};

