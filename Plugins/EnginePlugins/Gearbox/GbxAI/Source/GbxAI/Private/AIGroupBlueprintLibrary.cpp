#include "AIGroupBlueprintLibrary.h"

class AAIController;
class UAITicketDataAsset;

bool UAIGroupBlueprintLibrary::IsUsingAITicket(AAIController* AIUser, UAITicketDataAsset* Ticket, bool bInterruptible) {
    return false;
}

bool UAIGroupBlueprintLibrary::IsTicketValid(FAITicketHandle& TicketHandle) {
    return false;
}

void UAIGroupBlueprintLibrary::ClearTicket(FAITicketHandle& TicketHandle, float HoldDuration) {
}

void UAIGroupBlueprintLibrary::ClearAITicket(AAIController* AIUser, UAITicketDataAsset* Ticket, float HoldDuration) {
}

bool UAIGroupBlueprintLibrary::CanUseAITicket(AAIController* AIUser, UAITicketDataAsset* Ticket, float Value, bool bInterruptible) {
    return false;
}

bool UAIGroupBlueprintLibrary::AddAITicket(FAITicketHandle& OutTicketHandle, AAIController* AIUser, UAITicketDataAsset* Ticket, float Value, float MaxDuration, bool bPriority, bool bInterruptible) {
    return false;
}

UAIGroupBlueprintLibrary::UAIGroupBlueprintLibrary() {
}

