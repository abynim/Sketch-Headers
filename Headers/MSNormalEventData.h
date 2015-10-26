#import "NSObject.h"

@class MSLayer, MSLayerSnapperData, NSArray;

@interface MSNormalEventData : NSObject
{
    BOOL _hasMultipleTouches;
    BOOL _didMouseDown;
    MSLayer *_resizingLayer;
    long long _resizingCorner;
    long long _dragMode;
    NSArray *_backupSelection;
    MSLayerSnapperData *_snapperData;
    struct CGPoint _selectionStartPoint;
    struct CGPoint _selectionEndPoint;
    struct CGPoint _mouseDown;
    struct CGPoint _midPoint;
    struct CGPoint _originalScrollOrigin;
}

@property(retain, nonatomic) MSLayerSnapperData *snapperData; // @synthesize snapperData=_snapperData;
@property(copy, nonatomic) NSArray *backupSelection; // @synthesize backupSelection=_backupSelection;
@property(nonatomic) long long dragMode; // @synthesize dragMode=_dragMode;
@property(nonatomic) long long resizingCorner; // @synthesize resizingCorner=_resizingCorner;
@property(retain, nonatomic) MSLayer *resizingLayer; // @synthesize resizingLayer=_resizingLayer;
@property(nonatomic) struct CGPoint originalScrollOrigin; // @synthesize originalScrollOrigin=_originalScrollOrigin;
@property(nonatomic) struct CGPoint midPoint; // @synthesize midPoint=_midPoint;
@property(nonatomic) struct CGPoint mouseDown; // @synthesize mouseDown=_mouseDown;
@property(nonatomic) struct CGPoint selectionEndPoint; // @synthesize selectionEndPoint=_selectionEndPoint;
@property(nonatomic) struct CGPoint selectionStartPoint; // @synthesize selectionStartPoint=_selectionStartPoint;
@property(nonatomic) BOOL didMouseDown; // @synthesize didMouseDown=_didMouseDown;
@property(nonatomic) BOOL hasMultipleTouches; // @synthesize hasMultipleTouches=_hasMultipleTouches;
- (void).cxx_destruct;
- (void)mergeLayerSnapperData:(id)arg1 delegate:(id)arg2;

@end

