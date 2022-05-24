#pragma once
#include "CoreMinimal.h"
#include "GbxGFxPooledGridList.h"
#include "GbxGFxListCellUpdateInfo.h"
#include "GFxItemInspectionSkinsList.generated.h"

class UWeaponSkinPartData;
class UOakThumbnailManager;

UCLASS(NonTransient)
class UGFxItemInspectionSkinsList : public UGbxGFxPooledGridList {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<UWeaponSkinPartData*> DataList;
    
    UPROPERTY(Transient)
    UOakThumbnailManager* ThumbnailManager;
    
    UPROPERTY(Transient)
    bool bNeedsThumbnailRefresh;
    
public:
    UGFxItemInspectionSkinsList();
private:
    UFUNCTION()
    void OnThumbnailLoaded();
    
    UFUNCTION()
    void OnCellChanged(const FGbxGFxListCellUpdateInfo& UpdateInfo);
    
};

