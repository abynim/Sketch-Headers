//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSEventHandler.h"

@class MSComponentInsertionTool, MSDocumentData, MSLayer, MSSnapOverlayController, NSArray, NSDictionary, NSMutableDictionary, NSOperationQueue;

@interface MSInsertComponentEventHandler : MSEventHandler
{
    NSMutableDictionary *_previewImages;
    NSArray *_shareableObjectReferences;
    MSSnapOverlayController *_snapOverlayController;
    MSComponentInsertionTool *_tool;
    MSLayer *_previewLayer;
    MSDocumentData *_temporaryPreviewDocument;
    NSOperationQueue *_renderQueue;
    NSDictionary *_storedDragImageProviders;
}

+ (id)makeLayerForComponentReference:(id)arg1 forInserting:(BOOL)arg2 intoDocument:(id)arg3 isForeign:(BOOL)arg4;
+ (id)makeLayerForComponentReference:(id)arg1 forInserting:(BOOL)arg2 intoDocument:(id)arg3;
@property(retain, nonatomic) NSDictionary *storedDragImageProviders; // @synthesize storedDragImageProviders=_storedDragImageProviders;
@property(retain, nonatomic) NSOperationQueue *renderQueue; // @synthesize renderQueue=_renderQueue;
@property(retain, nonatomic) MSDocumentData *temporaryPreviewDocument; // @synthesize temporaryPreviewDocument=_temporaryPreviewDocument;
@property(retain, nonatomic) MSLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
@property(readonly, nonatomic) MSComponentInsertionTool *tool; // @synthesize tool=_tool;
@property(retain, nonatomic) MSSnapOverlayController *snapOverlayController; // @synthesize snapOverlayController=_snapOverlayController;
@property(retain, nonatomic) NSArray *shareableObjectReferences; // @synthesize shareableObjectReferences=_shareableObjectReferences;
- (void).cxx_destruct;
- (void)generatePreviewAndRefreshWhenDone;
- (void)setPreviewImage:(id)arg1 forZoomScale:(double)arg2;
- (id)previewBitmapForZoomScale:(double)arg1;
- (id)previewImage;
- (BOOL)pasteboardContainsComponent:(id)arg1;
- (void)draggingExited:(id)arg1;
- (void)updateDraggingItemsForDrag:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (id)layersForInserting;
- (void)readReferencesFromPasteboard:(id)arg1;
- (void)updateWithLocation:(struct CGPoint)arg1 modifierFlags:(unsigned long long)arg2;
- (struct CGRect)previewRectForInserting;
- (id)overlayItems:(unsigned long long)arg1 parameters:(struct MSRenderingParameters)arg2;
- (id)overlayItemImages:(struct CGColorSpace *)arg1 backingScale:(double)arg2;
- (BOOL)performInsert;
- (BOOL)absoluteMouseDown:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3;
- (void)trackMouse:(id)arg1;
- (void)handlerWillLoseFocus;
- (void)handlerGotFocus;
- (id)initWithManager:(id)arg1;

@end

