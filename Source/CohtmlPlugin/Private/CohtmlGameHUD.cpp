#include "CohtmlGameHUD.h"
#include "CohtmlHUD.h"

void ACohtmlGameHUD::SetupView(const FString& PageUrl, bool bEnableComplexCSSSupport, bool bDelayedUpdate) {
}

ACohtmlGameHUD::ACohtmlGameHUD() {
    this->CohtmlHUD = NULL;
    this->CohtmlHUDInternal = CreateDefaultSubobject<UCohtmlHUD>(TEXT("CohtmlHUD"));
}

