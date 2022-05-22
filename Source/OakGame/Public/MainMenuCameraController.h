#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MainMenuCameraController.generated.h"

class ACameraActor;

UCLASS()
class OAKGAME_API AMainMenuCameraController : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditInstanceOnly)
    float MinZoomDistance;
    
    UPROPERTY(EditInstanceOnly)
    float MaxZoomDistance;
    
    UPROPERTY(EditInstanceOnly)
    float ZoomSpeed;
    
    UPROPERTY(EditInstanceOnly)
    float MinOffsetDistance;
    
    UPROPERTY(EditInstanceOnly)
    float MaxOffsetDistance;
    
    UPROPERTY(EditInstanceOnly)
    float MinFocusDistance;
    
    UPROPERTY(EditInstanceOnly)
    float MaxFocusDistance;
    
    UPROPERTY(EditInstanceOnly)
    float MinFocalDistance;
    
    UPROPERTY(EditInstanceOnly)
    float MaxFocalDistance;
    
    UPROPERTY(EditInstanceOnly)
    float MaxPitchAngle;
    
    UPROPERTY(EditInstanceOnly)
    float MinPitchAngle;
    
    UPROPERTY(EditInstanceOnly)
    float RotationSpeed;
    
    UPROPERTY()
    AActor* LookAtActor;
    
    UPROPERTY()
    AActor* SubjectActor;
    
    UPROPERTY()
    ACameraActor* CameraActor;
    
public:
    AMainMenuCameraController();
    UFUNCTION(BlueprintCallable)
    void Setup(AActor* InLookAtActor, AActor* InSubjectActor, ACameraActor* InCameraActor);
    
};

