#include "GbxNavMeshPainter.h"
#include "GbxNavMeshPainterComponent.h"

void AGbxNavMeshPainter::SetPainterEnabled(bool bNewEnabled) {
}

bool AGbxNavMeshPainter::IsPainterEnabled() const {
    return false;
}

AGbxNavMeshPainter::AGbxNavMeshPainter() {
    this->PainterComponent = CreateDefaultSubobject<UGbxNavMeshPainterComponent>(TEXT("PainterComponent"));
}

