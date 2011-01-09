/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/CorePDF.framework/CorePDF
 */

@class CALayer, UIPDFSelectionLayer;



@interface UIPDFParagraphSelectionWidget : NSObject <UIPDFViewSelectionWidget>
{
    UIPDFSelectionLayer *_parent;
    CALayer *rectangle;
    CALayer *topControl;
    CALayer *rightControl;
    CALayer *bottomControl;
    CALayer *leftControl;
    struct CGImage { } *controlPointImage;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _rect;
    BOOL active;
    struct CGPoint { 
        float x; 
        float y; 
    } fixedPoint;
    CALayer *trackedControl;
}


- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentFrame;
- (void)envelopAnimation:(id)arg1 toRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)placeControls;
- (void)positionControlsExcept:(id)arg1;
- (struct CGPoint { float x1; float x2; })normalize:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)canMoveTo:(struct CGPoint { float x1; float x2; })arg1 leftToRight:(BOOL)arg2;
- (struct CGPoint { float x1; float x2; })trackingOffset;
- (void)pointsFor:(struct CGPoint { float x1; float x2; })arg1 are:(struct CGPoint { float x1; float x2; }*)arg2 and:(struct CGPoint { float x1; float x2; }*)arg3;
- (void)addTo:(id)arg1;
- (void)drawControls:(struct CGContext { }*)arg1 transform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2;
- (BOOL)hitControl:(struct CGPoint { float x1; float x2; })arg1;
- (void)startTracking:(struct CGPoint { float x1; float x2; })arg1;
- (void)track:(struct CGPoint { float x1; float x2; })arg1;
- (id)initWithParent:(id)arg1;
- (void)remove;
- (void)setActive:(BOOL)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)show;
- (void)dealloc;

@end