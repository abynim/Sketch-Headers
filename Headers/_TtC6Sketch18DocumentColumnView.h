//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC6Sketch18ListViewColumnView.h"

@class MSDocumentProgressView, MSDocumentsCollectionTextField, NSImageView, NSTextField, NSView;

@interface _TtC6Sketch18DocumentColumnView : _TtC6Sketch18ListViewColumnView
{
    // Error parsing type: , name: errorView
    // Error parsing type: , name: documentProgressView
    // Error parsing type: , name: statusView
    // Error parsing type: , name: shareIcon1
    // Error parsing type: , name: shareIcon2
    // Error parsing type: , name: documentTextField
    // Error parsing type: , name: statusObservation
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)viewDidMoveToWindow;
- (void)awakeFromNib;
- (void)prepareForReuse;
@property(nonatomic, retain) MSDocumentsCollectionTextField *documentTextField; // @synthesize documentTextField;
@property(nonatomic, retain) NSImageView *shareIcon2; // @synthesize shareIcon2;
@property(nonatomic, retain) NSImageView *shareIcon1; // @synthesize shareIcon1;
@property(nonatomic, retain) NSTextField *statusView; // @synthesize statusView;
@property(nonatomic, retain) MSDocumentProgressView *documentProgressView; // @synthesize documentProgressView;
@property(nonatomic, retain) NSView *errorView; // @synthesize errorView;

@end

