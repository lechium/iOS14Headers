/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, CLIPSShimDelegate;
#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
@class AnalyticsWorkspace, ImpoExpoService, NSObject, NSMutableDictionary, NSMutableString, NSString, NSMutableSet;

@interface CLIPSShim : NSObject {

	AnalyticsWorkspace* _clipsWorkspace;
	ImpoExpoService* _ieService;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned _strongAddressType;
	id<CLIPSShimDelegate> _delegate;
	NSMutableDictionary* _modules;
	void* _environment;
	NSMutableString* _dumpedString;
	NSMutableString* _consoleContents;
	NSString* _currentCommand;
	unsigned long long _commandStringLoc;
	NSMutableSet* _clipsHeldObjects;
	NSMutableDictionary* _invocationMap;
	NSMutableDictionary* _pendingOTAUpdates;
	SCD_Struct_CL56* _consoleNameRegex;
	SCD_Struct_CL56* _dumpStringRegex;

}

@property (assign,nonatomic) unsigned strongAddressType;                           //@synthesize strongAddressType=_strongAddressType - In the implementation block
@property (assign,nonatomic) void* environment;                                    //@synthesize environment=_environment - In the implementation block
@property (assign,nonatomic) SCD_Struct_CL57* consoleNameRegex;                    //@synthesize consoleNameRegex=_consoleNameRegex - In the implementation block
@property (assign,nonatomic) SCD_Struct_CL57* dumpStringRegex;                     //@synthesize dumpStringRegex=_dumpStringRegex - In the implementation block
@property (nonatomic,retain) NSMutableString * dumpedString;                       //@synthesize dumpedString=_dumpedString - In the implementation block
@property (nonatomic,retain) NSMutableString * consoleContents;                    //@synthesize consoleContents=_consoleContents - In the implementation block
@property (nonatomic,retain) NSString * currentCommand;                            //@synthesize currentCommand=_currentCommand - In the implementation block
@property (assign,nonatomic) unsigned long long commandStringLoc;                  //@synthesize commandStringLoc=_commandStringLoc - In the implementation block
@property (nonatomic,retain) NSMutableSet * clipsHeldObjects;                      //@synthesize clipsHeldObjects=_clipsHeldObjects - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * invocationMap;                  //@synthesize invocationMap=_invocationMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingOTAUpdates;              //@synthesize pendingOTAUpdates=_pendingOTAUpdates - In the implementation block
@property (assign,nonatomic,__weak) id<CLIPSShimDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * modules;                      //@synthesize modules=_modules - In the implementation block
+(id)sharedInstance;
+(id)decryptCLIPSData:(id)arg1 forModule:(id)arg2 ;
+(id)dataSectionNameForModule:(id)arg1 ;
+(CCCryptorRef)cryptor;
+(id)decodeAndInflateCLIPSString:(id)arg1 ;
+(id)createDecryptedCLPData:(const void*)arg1 length:(unsigned long long)arg2 ;
-(NSMutableDictionary *)modules;
-(void)releaseFact:(void*)arg1 ;
-(void)clear;
-(long long)run:(long long)arg1 ;
-(unsigned long long)factCount;
-(void)setConsoleNameRegex:(SCD_Struct_CL57*)arg1 ;
-(void)setDumpedString:(NSMutableString *)arg1 ;
-(void)setStrongAddressType:(unsigned)arg1 ;
-(int)executeBatchCommand:(id)arg1 module:(id)arg2 ;
-(void)log:(id)arg1 ;
-(id)matchFactsWithDeftemplateName:(id)arg1 withSlotKeyValues:(id)arg2 ;
-(id)setCurrentModule:(id)arg1 ;
-(void)deactivateModule:(id)arg1 ;
-(id)printedFacts:(id)arg1 limit:(long long)arg2 ;
-(long long)run;
-(SCD_Struct_CL57*)dumpStringRegex;
-(void)setConsoleContents:(NSMutableString *)arg1 ;
-(id)getValueForSlotNamed:(id)arg1 fromFact:(void*)arg2 ;
-(NSMutableSet *)clipsHeldObjects;
-(void)unloadConstructsForModule:(id)arg1 unconditionally:(BOOL)arg2 ;
-(void)retainFact:(void*)arg1 ;
-(void*)assertFactString:(id)arg1 moduleName:(id)arg2 ;
-(NSMutableString *)consoleContents;
-(id)factStringForFactDictionary:(id)arg1 ;
-(id)objectForDO:(dataObject*)arg1 ;
-(NSMutableDictionary *)pendingOTAUpdates;
-(void)setDumpStringRegex:(SCD_Struct_CL57*)arg1 ;
-(void)logMemoryStatistics:(id)arg1 verboseOnly:(BOOL)arg2 ;
-(void)dealloc;
-(void)setCommandString:(id)arg1 ;
-(void*)addObjectToEnvironment:(id)arg1 ;
-(void*)getNextFact:(void*)arg1 ;
-(BOOL)loadConstructsForModule:(id)arg1 ;
-(id)otaUpdatePlatformStringForDeviceClass:(long long)arg1 ;
-(long long)memoryUsed;
-(void)reset;
-(BOOL)addNewConstruct:(id)arg1 ;
-(id)dumpEngineStatusWithContext:(id)arg1 ;
-(void)setEnvironment:(void*)arg1 ;
-(SCD_Struct_CL57*)consoleNameRegex;
-(NSMutableDictionary *)invocationMap;
-(long long)releaseAllFreeMemory;
-(void)logMemoryStatistics:(id)arg1 ;
-(void)reportError:(id)arg1 ;
-(id)currentRuleName;
-(void)setOTAUpdate:(id)arg1 version:(id)arg2 module:(id)arg3 ;
-(void)retractFact:(void*)arg1 ;
-(void)setCommandStringLoc:(unsigned long long)arg1 ;
-(id)init;
-(void)removeCallbackInvocation:(id)arg1 ;
-(id)stringFromConstructsLoadState:(long long)arg1 ;
-(void)addCallbackInvocation:(id)arg1 invocation:(id)arg2 ;
-(id)objectFromMultifieldArg:(void*)arg1 start:(long long)arg2 end:(long long)arg3 ;
-(void)updateModuleInfoForModule:(id)arg1 slotValues:(id)arg2 ;
-(BOOL)addModuleNamed:(id)arg1 withConstruct:(id)arg2 ;
-(id)slotsStringForTemplate:(id)arg1 fromDictionary:(id)arg2 moduleName:(id)arg3 ;
-(void)updateAllModuleInfos;
-(void)setDelegate:(id<CLIPSShimDelegate>)arg1 ;
-(id)loadDataSection:(id)arg1 ;
-(void)listAllDeftemplates;
-(unsigned)strongAddressType;
-(void)pushFocus:(id)arg1 ;
-(void)setInvocationMap:(NSMutableDictionary *)arg1 ;
-(id)swapConsoleBuffer:(id)arg1 ;
-(void)setCurrentCommand:(NSString *)arg1 ;
-(long long)constructLoadStateForModule:(id)arg1 ;
-(id<CLIPSShimDelegate>)delegate;
-(BOOL)factIsImportant:(id)arg1 ;
-(void*)environment;
-(id)moduleRulesByName:(id)arg1 ;
-(id)deftemplatesMatchingPrefix:(id)arg1 ;
-(unsigned long long)commandStringLoc;
-(id)moduleNames;
-(void)setQueue:(id)arg1 ;
-(void)performOnFactsWithDeftemplateName:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)conservePrettyPrintMemory:(BOOL)arg1 ;
-(void)executeCommand:(id)arg1 moduleName:(id)arg2 ;
-(id)parseCLIPSModuleInfoFromConstructs:(id)arg1 ;
-(void)_logFactsForModule:(id)arg1 limit:(long long)arg2 when:(long long)arg3 ;
-(void*)deftemplateNamed:(id)arg1 moduleName:(id)arg2 ;
-(void)setPendingOTAUpdates:(NSMutableDictionary *)arg1 ;
-(void)logFacts:(long long)arg1 ;
-(void)setClipsHeldObjects:(NSMutableSet *)arg1 ;
-(id)factDictionaryForFact:(void*)arg1 ;
-(id)currentModule;
-(id)consoleBuffer;
-(BOOL)initializeWorkspace;
-(NSString *)currentCommand;
-(NSMutableString *)dumpedString;
-(void)registerCallbackFunction:(id)arg1 selector:(SEL)arg2 target:(id)arg3 ;
@end

