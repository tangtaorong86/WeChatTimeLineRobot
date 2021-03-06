/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PBMessageObserverDelegate.h"
#import "MMObject.h"

@class NSString;
@protocol EmoticonUploadCgiDelegate;

@interface EmoticonUploadCgi : MMObject <PBMessageObserverDelegate> {
	BOOL m_hasStartRequestOnce;
	id<EmoticonUploadCgiDelegate> m_delegate;
	unsigned long m_eventId;
	NSString* m_md5;
	unsigned long m_startPos;
	unsigned long m_totalLen;
	NSString* m_filePath;
}
@property(retain, nonatomic) NSString* m_filePath;
@property(retain, nonatomic) NSString* m_md5;
@property(assign, nonatomic) unsigned long m_totalLen;
@property(assign, nonatomic) unsigned long m_startPos;
@property(assign, nonatomic) BOOL m_hasStartRequestOnce;
@property(assign, nonatomic) unsigned long m_eventId;
@property(assign, nonatomic) __weak id<EmoticonUploadCgiDelegate> m_delegate;
-(void).cxx_destruct;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)callOkDelegateMd5:(id)a5;
-(void)callFailedDelegate;
-(void)internalRequest;
-(void)startRequest;
-(BOOL)isActive;
-(id)initWithFilePath:(id)filePath md5:(id)a5 delegate:(id)delegate;
-(void)dealloc;
@end

