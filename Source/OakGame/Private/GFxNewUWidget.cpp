#include "GFxNewUWidget.h"

void UGFxNewUWidget::OnOwnerResurrected(int32 CashLost) const {
}

UGFxNewUWidget::UGFxNewUWidget() {
    this->GFxKEY_TitleField = TEXT("titleField");
    this->GFxKEY_DescriptionField = TEXT("descriptionField");
    this->GFxKEY_FeeField = TEXT("feeField");
    this->TimeBeforeHide = 10.00f;
}

