//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSDataSupplierManager, MSDocumentData, NSSet, NSString;

@interface MSDataMenuHelper : NSObject
{
    MSDocumentData *_documentData;
    MSDataSupplierManager *_dataManager;
}

@property(readonly, nonatomic) __weak MSDataSupplierManager *dataManager; // @synthesize dataManager=_dataManager;
@property(nonatomic) __weak MSDocumentData *documentData; // @synthesize documentData=_documentData;
- (void).cxx_destruct;
- (void)applyImageData:(id)arg1 supplierIdentifier:(id)arg2 toLayer:(id)arg3;
- (void)applyImageData:(id)arg1 supplierIdentifier:(id)arg2 toBitmapLayer:(id)arg3;
- (id)imageReplaceableStyleFillOnLayer:(id)arg1;
- (void)applyImageData:(id)arg1 supplierIdentifier:(id)arg2 toShapeGroup:(id)arg3;
- (void)applyTextData:(id)arg1 supplierIdentifier:(id)arg2 toTextLayer:(id)arg3;
- (void)applyDataWithSupplierIdentifer:(id)arg1 toLayer:(id)arg2 applierBlock:(CDUnknownBlockType)arg3;
- (void)applyDataFromSupplier:(id)arg1 toOverridesWithIdentifier:(id)arg2;
- (void)clearDataIdentifiersOnSelectedLayers;
@property(readonly, nonatomic) BOOL selectedLayersHaveClearableDataIdentifiers;
@property(readonly, nonatomic) NSString *refreshDataText;
@property(readonly, nonatomic) BOOL canRefreshDataOnSelection;
- (void)refreshDataOnSelection;
@property(readonly, nonatomic) NSSet *dataIdentifiersInCurrentSelection;
- (void)applyDataFromSupplier:(id)arg1 toLayersWithIdentifier:(id)arg2;
- (void)applyDataFromSupplier:(id)arg1;
@property(readonly, nonatomic) unsigned long long applicableDataTypesDataTypeFromCurrentSelection;
- (BOOL)canApplyDataToOverride:(id)arg1;
- (unsigned long long)applicableDataTypesForLayer:(id)arg1;
- (id)selectedLayers;
- (id)initWithDataManager:(id)arg1;
- (id)init;

@end

