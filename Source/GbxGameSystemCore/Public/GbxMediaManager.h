#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxBaseMediaManager -FallbackName=GbxBaseMediaManager
#include "GbxMediaManager.generated.h"

class UObject;
class UMediaPlayer;
class UGbxMediaData;

UCLASS(BlueprintType)
class UGbxBaseMediaManager : public UObject
{
};

UCLASS(BlueprintType)
class GBXGAMESYSTEMCORE_API UGbxMediaManager : public UGbxBaseMediaManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<UMediaPlayer*> ActiveMediaPlayers;
    
public:
    UGbxMediaManager();
private:
    UFUNCTION()
    void OnMovieMediaOpenFailed(const FString& DeviceUrl);
    
    UFUNCTION()
    void OnMovieMediaClosed();
    
    UFUNCTION()
    void OnMovieEndReached();
    
public:
    UFUNCTION(BlueprintCallable)
    static UMediaPlayer* GbxPlayMovie(UObject* WorldContextObject, UGbxMediaData* InMediaData);
    
};

