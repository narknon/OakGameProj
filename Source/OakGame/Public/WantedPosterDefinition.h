#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "UObject/NoExportTypes.h"
#include "MissionObjectiveSetReference.h"
#include "WantedPosterDefinition.generated.h"

class UMaterialInterface;
class UGestaltPartListData;
class USkeletalMesh;
class UAnimSequence;
class UMission;

UCLASS(Abstract, BlueprintType)
class UWantedPosterDefinition : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform SkeletalMeshTransform;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* SkeletalMeshAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGestaltPartListData* GestaltPartList;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UMaterialInterface*> HologramMaterialOverrides;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<UMission> Mission;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMissionObjectiveSetReference MissionEntryPoint;
    
    UWantedPosterDefinition();
};

