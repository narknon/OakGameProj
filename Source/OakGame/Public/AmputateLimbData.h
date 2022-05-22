#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EMaterialParameterCopyMethod -FallbackName=EMaterialParameterCopyMethod
#include "AmputateLimbData.generated.h"

class UParticleSystem;
class UStaticMesh;
class UWwiseEvent;
class UMaterialInstanceConstant;
class UObject;
class AActor;

USTRUCT(BlueprintType)
struct FAmputateLimbData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite)
    FVector BoneScale;
    
    UPROPERTY(BlueprintReadWrite)
    UStaticMesh* StumpMesh;
    
    UPROPERTY(BlueprintReadWrite)
    UParticleSystem* StumpParticles;
    
    UPROPERTY(BlueprintReadWrite)
    UMaterialInstanceConstant* StumpMaterialOverride;
    
    UPROPERTY(BlueprintReadWrite)
    UMaterialInstanceConstant* StumpDecal;
    
    UPROPERTY(BlueprintReadWrite)
    FVector StumpDecalSize;
    
    UPROPERTY(BlueprintReadWrite)
    bool bStumpReceivesDecal;
    
    UPROPERTY(BlueprintReadWrite)
    UWwiseEvent* StumpSound;
    
    UPROPERTY(BlueprintReadWrite)
    FTransform StumpTransform;
    
    UPROPERTY(BlueprintReadWrite)
    UObject* LimbMesh;
    
    UPROPERTY(BlueprintReadWrite)
    UParticleSystem* LimbParticles;
    
    UPROPERTY(BlueprintReadWrite)
    TSubclassOf<AActor> LimbActorClass;
    
    UPROPERTY(BlueprintReadWrite)
    UMaterialInstanceConstant* LimbMaterialOverride;
    
    UPROPERTY(BlueprintReadWrite)
    bool bInheritStumpMaterialParameters;
    
    UPROPERTY(BlueprintReadWrite)
    EMaterialParameterCopyMethod InheritStumpMaterialParametersMethod;
    
    UPROPERTY(BlueprintReadWrite)
    bool bInheritLimbMaterialParameters;
    
    UPROPERTY(BlueprintReadWrite)
    EMaterialParameterCopyMethod InheritLimbMaterialParametersMethod;
    
    UPROPERTY(BlueprintReadWrite)
    bool bScaleLimbToStump;
    
    UPROPERTY(BlueprintReadWrite)
    FName LimbSocket;
    
    UPROPERTY(BlueprintReadWrite)
    float LimbScale;
    
    UPROPERTY(BlueprintReadWrite)
    float LimbMassScale;
    
    UPROPERTY(BlueprintReadWrite)
    int32 SourceMaterialIndex;
    
    OAKGAME_API FAmputateLimbData();
};

