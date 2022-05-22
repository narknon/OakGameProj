#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RecentConversationInfo.generated.h"

class APlayerController;
class AActor;

USTRUCT(BlueprintType)
struct FRecentConversationInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    double ExpirationTime;
    
    UPROPERTY()
    TWeakObjectPtr<APlayerController> PreferredPlayer;
    
    UPROPERTY()
    TWeakObjectPtr<AActor> LastKeyActor;
    
    UPROPERTY()
    FVector LastKeyLocation;
    
    GBXDIALOG_API FRecentConversationInfo();
};

