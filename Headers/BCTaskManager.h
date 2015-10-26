#import "NSObject.h"

@class NSArray, NSFileHandle, NSMutableArray, NSMutableString, NSTask;

@interface BCTaskManager : NSObject
{
    id <BCTaskManagerDelegate> _delegate;
    NSTask *_task;
    CDUnknownBlockType _taskManagerDidReceiveOutput;
    CDUnknownBlockType _taskManagerDidReceiveObject;
    CDUnknownBlockType _taskManagerDidEnd;
    NSMutableArray *_objects;
    NSMutableString *_output;
    NSMutableString *_lines;
    NSFileHandle *_outputFileHandle;
    NSFileHandle *_errorFileHandle;
    NSArray *_backgroundReadModes;
}

@property(retain, nonatomic) NSArray *backgroundReadModes; // @synthesize backgroundReadModes=_backgroundReadModes;
@property(retain, nonatomic) NSFileHandle *errorFileHandle; // @synthesize errorFileHandle=_errorFileHandle;
@property(retain, nonatomic) NSFileHandle *outputFileHandle; // @synthesize outputFileHandle=_outputFileHandle;
@property(retain, nonatomic) NSMutableString *lines; // @synthesize lines=_lines;
@property(retain, nonatomic) NSMutableString *output; // @synthesize output=_output;
@property(retain, nonatomic) NSMutableArray *objects; // @synthesize objects=_objects;
@property(copy, nonatomic) CDUnknownBlockType taskManagerDidEnd; // @synthesize taskManagerDidEnd=_taskManagerDidEnd;
@property(copy, nonatomic) CDUnknownBlockType taskManagerDidReceiveObject; // @synthesize taskManagerDidReceiveObject=_taskManagerDidReceiveObject;
@property(copy, nonatomic) CDUnknownBlockType taskManagerDidReceiveOutput; // @synthesize taskManagerDidReceiveOutput=_taskManagerDidReceiveOutput;
@property(retain, nonatomic) NSTask *task; // @synthesize task=_task;
@property(retain, nonatomic) id <BCTaskManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)receivedDidEnd:(id)arg1;
- (void)processOutput:(id)arg1 isError:(BOOL)arg2;
- (void)receivedError:(id)arg1;
- (void)receivedOutput:(id)arg1;
- (void)run;
- (id)init;

@end

