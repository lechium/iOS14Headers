/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCorePipeline/IMPipelineComponent.h>

@class IMDServiceSession, IMDAccount, IMDiMessageIDSTrustedData;

@interface IMConvergeGroupPipelineComponent : IMPipelineComponent {

	IMDServiceSession* _serviceSession;
	IMDAccount* _account;
	IMDiMessageIDSTrustedData* _idsTrustedData;

}
-(id)runIndividuallyWithInput:(id)arg1 ;
-(id)initWithServiceSession:(id)arg1 idsTrustedData:(id)arg2 account:(id)arg3 ;
@end
