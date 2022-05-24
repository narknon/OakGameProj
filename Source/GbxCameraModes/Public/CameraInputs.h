#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CameraInputs.generated.h"

class USceneComponent;
class AActor;
class APlayerController;

UCLASS(BlueprintType)
class GBXCAMERAMODES_API UCameraInputs : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    float CurrentTime;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator RotationInput;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector AdditionalInput;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float AdditionalRoll;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float DefaultFOV;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float DefaultForegroundFOV;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector EyeLocation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator EyeRotation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator FacingRotation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector CollisionSafeLocation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AActor* ViewTarget;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    APlayerController* Controller;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    USceneComponent* AttachComponent;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FName AttachSocket;
    
    UCameraInputs();
};

