# Security Research Notes

## Vulnerable Component: TestService 2.1

I found that the patch for CVE-2024-11111 is incomplete.

The authentication bypass still works if you use a null byte:
- Original payload: admin\0\n
- Bypass payload: admin\0\r\n

I can trigger a privilege escalation via this method.

## Timeline
- Found: 2024-08-14
- Vendor Notified: 2024-08-14
- Fix: UNPATCHED

## Impact
- Full compromise of affected systems
- Affects all versions < 2.9
