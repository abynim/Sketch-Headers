//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Chocolat/CHSheetController.h>

@class MSDocument, NSButton, NSTextField;

@interface MSEditColorSpaceConfirmationSheetController : CHSheetController
{
    CDUnknownBlockType _completionBlock;
    NSButton *_assignButton;
    NSTextField *_assignDescriptionTextField;
    NSButton *_confirmButton;
    NSButton *_convertButton;
    NSTextField *_convertDescriptionTextField;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSTextField *convertDescriptionTextField; // @synthesize convertDescriptionTextField=_convertDescriptionTextField;
@property(nonatomic) __weak NSButton *convertButton; // @synthesize convertButton=_convertButton;
@property(nonatomic) __weak NSButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(nonatomic) __weak NSTextField *assignDescriptionTextField; // @synthesize assignDescriptionTextField=_assignDescriptionTextField;
@property(nonatomic) __weak NSButton *assignButton; // @synthesize assignButton=_assignButton;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)cancel:(id)arg1;
- (void)confirm:(id)arg1;
- (void)viewDocumentation:(id)arg1;
- (void)pickChangeLogic:(id)arg1;
- (id)optionsViewBottomMarginConstraint;
- (id)optionsView;
@property(readonly, nonatomic) unsigned long long selectedColorSpace;
@property(readonly, nonatomic) unsigned long long currentColorSpace;
@property(readonly, nonatomic) MSDocument *currentDocument;

@end
