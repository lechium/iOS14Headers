/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSFinancePerformable.h>

@class NSDictionary, AMSDialogRequest, AMSURLTaskInfo, NSString;

@interface AMSFinanceDialogResponse : NSObject <AMSFinancePerformable> {

	BOOL _containsCommerceUIURL;
	NSDictionary* _dialogDictionary;
	AMSDialogRequest* _dialogRequest;
	long long _kind;
	AMSURLTaskInfo* _taskInfo;

}

@property (nonatomic,readonly) BOOL containsCommerceUIURL;                        //@synthesize containsCommerceUIURL=_containsCommerceUIURL - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dialogDictionary;              //@synthesize dialogDictionary=_dialogDictionary - In the implementation block
@property (assign,nonatomic) long long kind;                                      //@synthesize kind=_kind - In the implementation block
@property (nonatomic,copy) AMSURLTaskInfo * taskInfo;                             //@synthesize taskInfo=_taskInfo - In the implementation block
@property (nonatomic,readonly) AMSDialogRequest * dialogRequest;                  //@synthesize dialogRequest=_dialogRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)handleDialogResult:(id)arg1 taskInfo:(id)arg2 ;
+(id)performFinanceDialog:(id)arg1 taskInfo:(id)arg2 ;
+(id)_presentDialog:(id)arg1 taskInfo:(id)arg2 ;
+(BOOL)_credentialSource:(unsigned long long)arg1 satisfiesAuthenticationType:(unsigned long long)arg2 ;
+(BOOL)_shouldSendOverIDS:(id)arg1 taskInfo:(id)arg2 ;
+(id)_presentIDSDialog:(id)arg1 taskInfo:(id)arg2 ;
+(void)_stashTIDContinueHeadersForResult:(id)arg1 info:(id)arg2 ;
+(id)_presentEngagementForResult:(id)arg1 taskInfo:(id)arg2 ;
+(id)_updatedDialogResultFromResult:(id)arg1 engagementResult:(id)arg2 error:(id)arg3 ;
+(long long)dialogKindForTaskInfo:(id)arg1 withResponseDictionary:(id)arg2 ;
-(AMSDialogRequest *)dialogRequest;
-(id)performWithTaskInfo:(id)arg1 ;
-(id)initWithDialogDictionary:(id)arg1 kind:(long long)arg2 taskInfo:(id)arg3 ;
-(NSDictionary *)dialogDictionary;
-(long long)kind;
-(id)_createDialogRequest;
-(long long)_actionTypeFromButtonDictionary:(id)arg1 ;
-(BOOL)_isCommerceUIURL:(id)arg1 actionType:(long long)arg2 URLType:(long long)arg3 ;
-(id)_URLForCommerceUIFromURL:(id)arg1 tidContinue:(BOOL)arg2 ;
-(id)_createRequestButtonsFromDialogDictionary:(id)arg1 ;
-(id)_createActionFromButtonDictionary:(id)arg1 title:(id)arg2 ;
-(BOOL)containsCommerceUIURL;
-(AMSURLTaskInfo *)taskInfo;
-(void)setKind:(long long)arg1 ;
-(void)setTaskInfo:(AMSURLTaskInfo *)arg1 ;
@end

