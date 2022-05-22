#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AITicketHandle.h"
#include "AIGroupBlueprintLibrary.generated.h"

class AAIController;
class UAITicketDataAsset;

UCLASS(BlueprintType)
class GBXAI_API UAIGroupBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAIGroupBlueprintLibrary();
    UFUNCTION(BlueprintPure)
    static bool IsUsingAITicket(AAIController* AIUser, UAITicketDataAsset* Ticket, bool bInterruptible);
    
    UFUNCTION(BlueprintCallable)
    static bool IsTicketValid(UPARAM(Ref) FAITicketHandle& TicketHandle);
    
    UFUNCTION(BlueprintCallable)
    static void ClearTicket(UPARAM(Ref) FAITicketHandle& TicketHandle, float HoldDuration);
    
    UFUNCTION(BlueprintCallable)
    static void ClearAITicket(AAIController* AIUser, UAITicketDataAsset* Ticket, float HoldDuration);
    
    UFUNCTION(BlueprintPure)
    static bool CanUseAITicket(AAIController* AIUser, UAITicketDataAsset* Ticket, float Value, bool bInterruptible);
    
    UFUNCTION(BlueprintCallable)
    static bool AddAITicket(FAITicketHandle& OutTicketHandle, AAIController* AIUser, UAITicketDataAsset* Ticket, float Value, float MaxDuration, bool bPriority, bool bInterruptible);
    
};

