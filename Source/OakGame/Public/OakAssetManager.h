#pragma once
#include "CoreMinimal.h"
#include "GbxAssetManager.h"
#include "OakAssetManager.generated.h"

class UObject;
class ULevelAssetListData;

UCLASS()
class UOakAssetManager : public UGbxAssetManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<UObject*> CrossLevelAssets;
    
    UPROPERTY()
    ULevelAssetListData* LevelAssetListData;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<int32, FString> LocVOChunkIds;
    
public:
    UOakAssetManager();
};

