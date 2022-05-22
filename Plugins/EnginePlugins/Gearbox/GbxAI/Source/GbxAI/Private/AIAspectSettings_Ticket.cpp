#include "AIAspectSettings_Ticket.h"

FAIAspectSettings_Ticket::FAIAspectSettings_Ticket() {
    this->bPriority = false;
    this->bInterruptible = false;
    this->AITicket = NULL;
    this->bOverrideActorBlackboardKey = false;
    this->bApplyHoldOnSuccess = false;
    this->bApplyHoldOnFailure = false;
    this->bApplyHoldOnAbort = false;
    this->bAcquireTicket = false;
}

