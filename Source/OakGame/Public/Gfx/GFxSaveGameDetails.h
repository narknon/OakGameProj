#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxSaveGameDetails.generated.h"

class UGbxTextField;

UCLASS(NonTransient)
class UGFxSaveGameDetails : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxTextField* SaveGameName;
    
    UPROPERTY(Transient)
    UGbxTextField* ChapterMission;
    
    UPROPERTY(Transient)
    UGbxTextField* CurrentMission;
    
    UPROPERTY(Transient)
    UGbxTextField* VaultHunterMode;
    
    UPROPERTY(Transient)
    UGbxTextField* TimePlayed;
    
public:
    UGFxSaveGameDetails();
};

