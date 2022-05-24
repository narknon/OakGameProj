#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxNavAreaBase -FallbackName=GbxNavAreaBase
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=EHavokNavMaterial -FallbackName=EHavokNavMaterial
#include "GbxNavArea.generated.h"

class UGbxNavMeshLayer;
class UGbxNavArea;

UCLASS()
class GBXNAV_API UGbxNavArea : public UGbxNavAreaBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FColor DrawColor;
    
    UPROPERTY(EditAnywhere)
    TArray<UGbxNavMeshLayer*> IgnoreLayers;
    
    UPROPERTY(EditAnywhere)
    UGbxNavArea* EffectiveArea;
    
    UPROPERTY(EditAnywhere)
    EHavokNavMaterial HavokNavMaterial;
    
public:
    UGbxNavArea();
};

