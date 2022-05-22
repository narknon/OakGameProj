#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "StartupAssetTypeData.h"
#include "GbxAssetManager.generated.h"

UCLASS(Config=Game)
class GBXGAMESYSTEMCORE_API UGbxAssetManager : public UAssetManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config)
    TArray<FStartupAssetTypeData> StartupAssetTypes;
    
    UPROPERTY(Config)
    TArray<FName> StartupAssetFiles;
    
public:
    UGbxAssetManager();
};

