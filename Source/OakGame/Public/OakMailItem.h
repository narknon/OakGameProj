#pragma once
#include "CoreMinimal.h"
#include "EMailItemType.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/OnlineReplStructs.h"
#include "OakMailItem.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FOakMailItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    EMailItemType MailItemType;
    
    UPROPERTY()
    FText SenderDisplayName;
    
    UPROPERTY()
    FText Subject;
    
    UPROPERTY()
    FText Body;
    
    UPROPERTY()
    FString GearSerialNumber;
    
    UPROPERTY()
    uint32 MissionHash;
    
    UPROPERTY()
    FString MailGuid;
    
    UPROPERTY()
    FDateTime DateSent;
    
    UPROPERTY()
    FDateTime ExpirationDate;
    
    UPROPERTY()
    FUniqueNetIdRepl FromPlayerId;
    
    UPROPERTY()
    bool bHasBeenRead;
    
    FOakMailItem();
};

