/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADOrientedBounds, ODDDiagram, OADGroup, OADDrawingTheme, NSMutableArray, OADShapeStyle;



@interface ODIState : NSObject 
{
    ODDDiagram *mDiagram;
    OADOrientedBounds *mDiagramOrientedBounds;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mLogicalBounds;
    float mScale;
    OADGroup *mGroup;
    NSMutableArray *mPresentationNames;
    NSMutableArray *mDefaultStyleLabelNames;
    NSInteger mPointCount;
    NSInteger mPointIndex;
    OADShapeStyle *mTextStyle;
    OADDrawingTheme *mDrawingTheme;
}


- (void)setGroup:(id)arg1;
- (void)setDefaultStyleLabelName:(id)arg1 forPointType:(NSInteger)arg2;
- (id)presentationNameForPointType:(NSInteger)arg1;
- (id)drawingTheme;
- (NSInteger)pointIndex;
- (id)defaultStyleLabelNameForPointType:(NSInteger)arg1;
- (id)initWithDiagram:(id)arg1 group:(id)arg2 drawingTheme:(id)arg3;
- (void)setPointCount:(NSInteger)arg1;
- (void)setPointIndex:(NSInteger)arg1;
- (id)diagramOrientedBounds;
- (void)setLogicalBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 maintainAspectRatio:(BOOL)arg2;
- (void)setPresentationName:(id)arg1 forPointType:(NSInteger)arg2;
- (void)setTextStyle:(id)arg1;
- (void)setLogicalBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)textStyle;
- (NSInteger)pointCount;
- (id)diagram;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })logicalBounds;
- (id)group;
- (float)scale;
- (void)dealloc;

@end