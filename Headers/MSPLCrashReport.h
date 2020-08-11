//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSPLCrashReportApplicationInfo, MSPLCrashReportExceptionInfo, MSPLCrashReportMachExceptionInfo, MSPLCrashReportMachineInfo, MSPLCrashReportProcessInfo, MSPLCrashReportSignalInfo, MSPLCrashReportSystemInfo, NSArray;

@interface MSPLCrashReport : NSObject
{
    struct _PLCrashReportDecoder *_decoder;
    MSPLCrashReportSystemInfo *_systemInfo;
    MSPLCrashReportMachineInfo *_machineInfo;
    MSPLCrashReportApplicationInfo *_applicationInfo;
    MSPLCrashReportProcessInfo *_processInfo;
    MSPLCrashReportSignalInfo *_signalInfo;
    MSPLCrashReportMachExceptionInfo *_machExceptionInfo;
    NSArray *_threads;
    NSArray *_images;
    MSPLCrashReportExceptionInfo *_exceptionInfo;
    struct __CFUUID *_uuid;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct __CFUUID *uuidRef; // @synthesize uuidRef=_uuid;
@property(readonly, nonatomic) MSPLCrashReportExceptionInfo *exceptionInfo; // @synthesize exceptionInfo=_exceptionInfo;
@property(readonly, nonatomic) NSArray *images; // @synthesize images=_images;
@property(readonly, nonatomic) NSArray *threads; // @synthesize threads=_threads;
@property(readonly, nonatomic) MSPLCrashReportMachExceptionInfo *machExceptionInfo; // @synthesize machExceptionInfo=_machExceptionInfo;
@property(readonly, nonatomic) MSPLCrashReportSignalInfo *signalInfo; // @synthesize signalInfo=_signalInfo;
@property(readonly, nonatomic) MSPLCrashReportProcessInfo *processInfo; // @synthesize processInfo=_processInfo;
@property(readonly, nonatomic) MSPLCrashReportApplicationInfo *applicationInfo; // @synthesize applicationInfo=_applicationInfo;
@property(readonly, nonatomic) MSPLCrashReportMachineInfo *machineInfo; // @synthesize machineInfo=_machineInfo;
@property(readonly, nonatomic) MSPLCrashReportSystemInfo *systemInfo; // @synthesize systemInfo=_systemInfo;
@property(readonly, nonatomic) BOOL hasExceptionInfo;
@property(readonly, nonatomic) BOOL hasProcessInfo;
@property(readonly, nonatomic) BOOL hasMachineInfo;
- (id)imageForAddress:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)extractMachExceptionInfo:(struct _Plcrash__CrashReport__Signal__MachException *)arg1 error:(id *)arg2;
- (id)extractSignalInfo:(struct _Plcrash__CrashReport__Signal *)arg1 error:(id *)arg2;
- (id)extractExceptionInfo:(struct _Plcrash__CrashReport__Exception *)arg1 error:(id *)arg2;
- (id)extractImageInfo:(struct _Plcrash__CrashReport *)arg1 error:(id *)arg2;
- (id)extractThreadInfo:(struct _Plcrash__CrashReport *)arg1 error:(id *)arg2;
- (id)extractStackFrameInfo:(struct _Plcrash__CrashReport__Thread__StackFrame *)arg1 error:(id *)arg2;
- (id)extractSymbolInfo:(struct _Plcrash__CrashReport__Symbol *)arg1 error:(id *)arg2;
- (id)extractProcessInfo:(struct _Plcrash__CrashReport__ProcessInfo *)arg1 error:(id *)arg2;
- (id)extractApplicationInfo:(struct _Plcrash__CrashReport__ApplicationInfo *)arg1 error:(id *)arg2;
- (id)extractMachineInfo:(struct _Plcrash__CrashReport__MachineInfo *)arg1 error:(id *)arg2;
- (id)synthesizeProcessorInfoFromArchitecture:(int)arg1 error:(id *)arg2;
- (id)extractProcessorInfo:(struct _Plcrash__CrashReport__Processor *)arg1 error:(id *)arg2;
- (id)extractSystemInfo:(struct _Plcrash__CrashReport__SystemInfo *)arg1 processorInfo:(id)arg2 error:(id *)arg3;
- (struct _Plcrash__CrashReport *)decodeCrashData:(id)arg1 error:(id *)arg2;

@end

