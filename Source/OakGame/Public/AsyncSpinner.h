#pragma once
#include "CoreMinimal.h"
#include "GbxGFxHUDWidget.h"
#include "UObject/NoExportTypes.h"
#include "AsyncSpinner.generated.h"

class UTexture2D;

UCLASS()
class OAKGAME_API UAsyncSpinner : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> TextureToLoad;
    
private:
    UPROPERTY()
    FSoftObjectPath TextureToLoadStringReference;
    
public:
    UAsyncSpinner();
    UFUNCTION()
    void StartLoadingTexture(const FSoftObjectPath& AssetPathToLoad) const;
    
private:
    UFUNCTION()
    void CompleteLoadingTexture() const;
    
};

