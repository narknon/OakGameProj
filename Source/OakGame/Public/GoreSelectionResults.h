#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EMaterialParameterCopyMethod -FallbackName=EMaterialParameterCopyMethod
#include "GoreSelectionResults.generated.h"

class UParticleSystem;
class UStaticMesh;
class UWwiseEvent;
class UMaterialInstanceConstant;
class UObject;
class AActor;

USTRUCT(BlueprintType)
struct FGoreSelectionResults {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FName StumpSocket;
    
    UPROPERTY(BlueprintReadOnly)
    FVector StumpBoneScale;
    
    UPROPERTY(BlueprintReadOnly)
    FVector StumpDecalSize;
    
    UPROPERTY(BlueprintReadOnly)
    UStaticMesh* StumpMesh;
    
    UPROPERTY(BlueprintReadOnly)
    UParticleSystem* StumpParticles;
    
    UPROPERTY(BlueprintReadOnly)
    UMaterialInstanceConstant* StumpMaterialOverride;
    
    UPROPERTY(BlueprintReadOnly)
    UMaterialInstanceConstant* StumpDecal;
    
    UPROPERTY(BlueprintReadOnly)
    UWwiseEvent* StumpSound;
    
    UPROPERTY(BlueprintReadOnly)
    bool bStumpReceivesDecal;
    
    UPROPERTY(BlueprintReadOnly)
    bool bInheritStumpMaterialParameters;
    
    UPROPERTY(BlueprintReadOnly)
    EMaterialParameterCopyMethod InheritStumpMaterialParametersMethod;
    
    UPROPERTY(BlueprintReadOnly)
    bool bInheritLimbMaterialParameters;
    
    UPROPERTY(BlueprintReadOnly)
    EMaterialParameterCopyMethod InheritLimbMaterialParametersMethod;
    
    UPROPERTY(BlueprintReadOnly)
    FName LimbSocket;
    
    UPROPERTY(BlueprintReadOnly)
    UObject* LimbMesh;
    
    UPROPERTY(BlueprintReadOnly)
    UParticleSystem* LimbParticles;
    
    UPROPERTY(BlueprintReadOnly)
    TSubclassOf<AActor> LimbActorClass;
    
    UPROPERTY(BlueprintReadOnly)
    UMaterialInstanceConstant* LimbMaterialOverride;
    
    UPROPERTY(BlueprintReadOnly)
    float LimbForce;
    
    UPROPERTY(BlueprintReadOnly)
    bool bScaleLimbToStump;
    
    UPROPERTY(BlueprintReadOnly)
    float LimbScale;
    
    UPROPERTY(BlueprintReadOnly)
    float LimbMassScale;
    
    UPROPERTY(BlueprintReadOnly)
    int32 SourceMaterialIndex;
    
    OAKGAME_API FGoreSelectionResults();
};

