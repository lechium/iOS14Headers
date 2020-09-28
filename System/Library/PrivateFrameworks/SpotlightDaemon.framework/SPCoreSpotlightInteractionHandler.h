/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContactStore;

@interface SPCoreSpotlightInteractionHandler : NSObject {

	CNContactStore* _contactStore;

}

@property (nonatomic,retain) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
-(CNContactStore *)contactStore;
-(id)interestingContactIdentifiersFromIntent:(id)arg1 ;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)handleInteraction:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 ;
-(id)attributeForIntent:(id)arg1 direction:(long long)arg2 ;
@end
