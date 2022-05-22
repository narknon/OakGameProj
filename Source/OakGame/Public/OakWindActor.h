#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxWindActor -FallbackName=GbxWindActor
#include "NumericRange.h"
#include "UObject/NoExportTypes.h"
#include "RepWindDirection.h"
#include "UObject/NoExportTypes.h"
#include "RepWindGust.h"
#include "WindVectorField.h"
#include "UObject/NoExportTypes.h"
#include "OakWindActor.generated.h"

class UMaterialParameterCollection;
class UObject;

UCLASS()
class AOakWindActor : public AGbxWindActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float MaxVariationAngleBetweenGusts;
    
    UPROPERTY(EditAnywhere)
    float MaxVariationAngle;
    
    UPROPERTY(EditAnywhere)
    FNumericRange DirectionChangeDuration;
    
    UPROPERTY(EditAnywhere)
    FNumericRange DelayBetweenGusts;
    
    UPROPERTY(EditAnywhere)
    FNumericRange GustBuildupDuration;
    
    UPROPERTY(EditAnywhere)
    float GustFalloffDurationPercent;
    
    UPROPERTY(EditAnywhere)
    float ChanceToReGust;
    
    UPROPERTY(EditAnywhere)
    float MinWindSpeed;
    
    UPROPERTY(EditAnywhere)
    float MaxWindSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PreviewStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BaseWindSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float BaseMinGust;
    
    UPROPERTY(EditDefaultsOnly)
    float BaseMaxGust;
    
    UPROPERTY(EditAnywhere)
    bool bUseYawJitter;
    
    UPROPERTY(EditAnywhere)
    float RotationJitterAngle;
    
    UPROPERTY(EditAnywhere)
    float RotationJitterFrequency;
    
    UPROPERTY(EditDefaultsOnly)
    UMaterialParameterCollection* UniversalMaterialParameterCollection;
    
    UPROPERTY(EditDefaultsOnly)
    FName WindStrength_MaterialParameterName;
    
    UPROPERTY(EditDefaultsOnly)
    FName WindSpeed_MaterialParameterName;
    
    UPROPERTY(EditDefaultsOnly)
    FName WindDirection_MaterialParameterName;
    
    UPROPERTY(EditDefaultsOnly)
    FName MinGustAmount_MaterialParameterName;
    
    UPROPERTY(EditDefaultsOnly)
    FName MaxGustAmount_MaterialParameterName;
    
    UPROPERTY(Transient)
    FRotator BaseRotation;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_RepDirection)
    FRepWindDirection RepDirection;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_RepGust)
    FRepWindGust RepGust;
    
    UPROPERTY(Transient)
    FRotator CurrentWindRotation;
    
    UPROPERTY(Transient)
    float CurrentWindSpeed;
    
public:
    UPROPERTY(VisibleAnywhere)
    FWindVectorField VectorField;
    
    AOakWindActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_RepGust();
    
    UFUNCTION()
    void OnRep_RepDirection();
    
public:
    UFUNCTION(BlueprintCallable)
    static FLinearColor GetWindVectorFieldAtLocation(UObject* WorldContextObject, FVector InLocation);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetWindDirectionAtLocation(UObject* WorldContextObject, FVector InLocation, float& Speed);
    
};

