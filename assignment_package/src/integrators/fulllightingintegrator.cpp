#include "fulllightingintegrator.h"

Color3f FullLightingIntegrator::Li(const Ray &ray, const Scene &scene, std::shared_ptr<Sampler> sampler, int depth) const
{
    //TODO
    return Color3f(0.f);
}

float GI_BalanceHeuristic(int nf, Float fPdf, int ng, Float gPdf)
{
    //TODO
    return 0.f;
}

float GI_PowerHeuristic(int nf, Float fPdf, int ng, Float gPdf)
{
    //TODO
    return 0.f;
}

