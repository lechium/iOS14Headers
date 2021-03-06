/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IMAccount;

@interface IMCoreAutomationHook : NSObject {

	IMAccount* _imessageAccount;

}

@property (readonly) IMAccount * bestiMessageAccount; 
+(id)stringFromAutomationErrorCode:(long long)arg1 ;
-(IMAccount *)bestiMessageAccount;
-(id)chatForHandles:(id)arg1 error:(id*)arg2 results:(id)arg3 ;
-(id)handlesFromStrings:(id)arg1 error:(id*)arg2 results:(id)arg3 ;
-(id)existingChatForGroupID:(id)arg1 error:(id*)arg2 results:(id)arg3 ;
@end

