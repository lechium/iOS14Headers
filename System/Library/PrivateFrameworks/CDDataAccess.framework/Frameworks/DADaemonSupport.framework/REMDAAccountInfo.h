/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/REMDAAccountProviding.h>

@class NSString, REMObjectID;

@interface REMDAAccountInfo : NSObject <REMDAAccountProviding> {

	NSString* _accountID;
	REMObjectID* _rem_accountObjectID;
	NSString* _accountDescription;

}

@property (nonatomic,retain) NSString * accountID;                           //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,retain) REMObjectID * rem_accountObjectID;              //@synthesize rem_accountObjectID=_rem_accountObjectID - In the implementation block
@property (nonatomic,retain) NSString * accountDescription;                  //@synthesize accountDescription=_accountDescription - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAccountDescription:(NSString *)arg1 ;
-(NSString *)accountDescription;
-(void)setAccountID:(NSString *)arg1 ;
-(id)loggingDescription;
-(REMObjectID *)rem_accountObjectID;
-(NSString *)accountID;
-(id)initWithAccountID:(id)arg1 remAccountObjectID:(id)arg2 accountDescription:(id)arg3 ;
-(void)setRem_accountObjectID:(REMObjectID *)arg1 ;
@end
