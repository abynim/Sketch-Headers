//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSBaseInspectorSection.h"

#import "MSCollapsibleHeaderInspectorItemTarget-Protocol.h"

@class MSFlowFixLayerInspectorItem, MSFlowHeaderInspectorItem, MSFlowInspectorItem, MSHeaderInspectorItem, _TtC6Sketch33MSFlowScrollPositionInspectorItem;

@interface MSFlowInspectorSection : MSBaseInspectorSection <MSCollapsibleHeaderInspectorItemTarget>
{
    MSHeaderInspectorItem *_initialHeaderItem;
    MSFlowHeaderInspectorItem *_headerItem;
    MSFlowInspectorItem *_flowItem;
    MSFlowFixLayerInspectorItem *_fixedLayerItem;
    _TtC6Sketch33MSFlowScrollPositionInspectorItem *_scrollPositionItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _TtC6Sketch33MSFlowScrollPositionInspectorItem *scrollPositionItem; // @synthesize scrollPositionItem=_scrollPositionItem;
@property(retain, nonatomic) MSFlowFixLayerInspectorItem *fixedLayerItem; // @synthesize fixedLayerItem=_fixedLayerItem;
@property(retain, nonatomic) MSFlowInspectorItem *flowItem; // @synthesize flowItem=_flowItem;
@property(retain, nonatomic) MSFlowHeaderInspectorItem *headerItem; // @synthesize headerItem=_headerItem;
@property(retain, nonatomic) MSHeaderInspectorItem *initialHeaderItem; // @synthesize initialHeaderItem=_initialHeaderItem;
- (BOOL)wantsSeparatorBetweenView:(id)arg1 andView:(id)arg2;
- (void)item:(id)arg1 wantsSectionToCollapse:(BOOL)arg2;
- (BOOL)hasLayerWithParentArtboard;
- (BOOL)isInFlowEventHandler;
- (void)updateItems;
- (void)refreshIfNecessary:(id)arg1;
- (void)handlerFocusDidChange:(id)arg1;
- (void)addFlowAction:(id)arg1;
- (void)updateInitialHeader;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

